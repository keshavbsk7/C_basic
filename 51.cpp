#include<iostream>
using namespace std;
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int rsum,csum;
	for(int i=0;i<3;i++)
	{
		rsum=0;
		csum=0;
		for(int j=0;j<3;j++)
		{
			rsum+=a[i][j];
			csum+=a[j][i];
		}
		cout<<"sum of "<<i+1<<"st row is "<<rsum<<" and col is "<<csum<<"\n";
	}
}
