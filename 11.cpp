#include<iostream>
using namespace std;
int main()
{
	int arr[]={2,6,1,4,8};
	int max,smax;
	max=0;
	smax=0;
	for(int i=0;i<5;i++)
	{
	
	if(max<arr[i])
	{
				
				smax=max;
				max=arr[i];
				
	}
	else if(smax<arr[i])
		smax=arr[i];
		
	}

	cout<<max<<" "<<smax;
}
