#include<iostream>
using namespace std;
int main()
{
	int a[5]={2,1,5,6,1};
	int temp;
	for(int i=0;i<5;i++)
	{
		temp=a[i];
		for(int j=i+1;j<5;j++)
		{
			if(temp==a[j])
			{
				cout<<"duplicate "<<a[j];
				exit(1);
			}
			
		}
	}
}
