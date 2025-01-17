#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(int argc,char*argv[])
{
	float x,y,a;
	for(y=1.5f;y>-1.5f;y-=0.1f)
	{
		for(x=-1.5f;x<1.5f;x+=0.05f)
		{
			a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<=0.0f?'w':' ');
		}
		system("color 0c");
		putchar('\n');
	}
	printf("谭愉洋\n");
	printf("万事如意！\n");

	return 0;
}