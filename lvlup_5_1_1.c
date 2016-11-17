#include <stdio.h>

void recurse_input(int i);
int main()
{
	int i,k,*ms;
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
	if(i>0)
	{
		printf("Input\n");
		fflush(stdin);
		scanf("%d", &ms);
		recurse_input(i-1);
	}
	
}
