#include<iostream>
using namespace std;
int main()
{
	int a[3][3]={{1,2,3},{4,5,3},{3,8,9}};
	int n=3,count=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(n==a[i][j])
			{
				count++;
			}
		}
	}
	cout<<count;

}
