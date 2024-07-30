#include<iostream>
using namespace std;
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3]={{7,8,9},{4,5,6},{1,2,3}};
	int ans[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			ans[i][j]=0;
			for(int k=0;k<3;k++)
			{
				ans[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	}
}
