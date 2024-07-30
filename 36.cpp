#include<iostream>
using namespace std;
int main()
{
	string s="malayalam";
	int l=s.length();
	string t="";
	for(int i=l-1;i>=0;i--)
	{
		t=t+s[i];
	}
	if(t==s)
	{
		cout<<"palindrome";
	}
	else
		cout<<"not"; 
}
