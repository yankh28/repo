#include <stdio.h>
#include <iostream>

int main()
{
	int i=0;
	FILE* f;
	f=fopen("text.txt", "w");
	fprintf(f,"%d", 4555);
	printf("Typing...\n");
	printf("Press any key.\n");
	fclose(f);
	getchar();
return 0;
}

	
