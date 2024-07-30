#include<iostream>
using namespace std;
int main()
{
	string s[5]={"keshav","gliffy","demi","naveen","chandra"};
	string key="demi";
	for(int i=0;i<5;i++)
	{
		if(s[i]==key)
		{
			cout<<"found";
		}
	}
}
