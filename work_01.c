#include<stdio.h>
int* intersec(int a[],int n1,int b[],int n2,int s[])
{
	int *p=(int*)malloc(sizeof(int)*n1),*q=(int*)malloc(sizeof(int)*n2);
	scanf("%d",&n1);
	for(p=a;p<a+n1;p++)
	{
		scanf("%d",p);
	}
	scanf("%d",&n2);
	for(q=a;q<b+n2;q++)
	{
		scanf("%d",q);
	}
	
}
int main()
{
	int a[20];
	int b[20];
	int s[40];

return 0;
}
