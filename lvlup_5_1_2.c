#include <stdio.h>

void output(int i,int ms);
void recurse_input(int i);
int main()
{
	int i,k;
	do
	{
		printf("Input array\n");
		fflush(stdin);
		k=scanf("%d",&i);
	}while (!k);
		recurse_input(i);
		getchar();
	return 0;
}
void recurse_input(int i)
{	int ms;
	int k=i;
	if(i>0)
	{
		printf("Input\n");
		fflush(stdin);
		scanf("%d", &ms);
		recurse_input(i-1);
	}
	output(i,ms);
}
void output(int i, int ms)
{
	if (i<=0)
	{
		printf("%3d",ms);
		output(i+1,ms);
	}
}
