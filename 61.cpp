#include<iostream>
using namespace std;
int main()
{
	int a[5]={2,1,1,1,2};
	int temp;
	int index,max=0;
	int count=0;
	for(int i=0;i<5;i++)
	{
		
		temp=a[i];
		count=0;
		for(int j=i+1;j<5;j++)
		{
			if(temp==a[j])
			{
				count++;
			}
			
		}
		if(count>max)
		{
			max=count;
			index=a[i];
		}
		
	}
	cout<<index<<" is max with "<<max<<" duplicate";
}
