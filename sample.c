#include<stdio.h>
int main()
{
	char a;
	

	int n1,n2;
	scanf("%d %d",&n1,&n2);
	printf("\n");
	scanf("%c",&a);
	if(a=='+')
	{
		printf("%d",(n1+n2));
	}
	return 0;
}
