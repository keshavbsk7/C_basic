#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s="keshav";
	
	char temp;
	int l=s.length();
	for(int i=0;i<=l/2;i++)
	{
		temp=s[i];
		
		s[i]=s[l-i-1];
		s[l-i-1]=temp;
		
		
		
	}
	cout<<s;
}
