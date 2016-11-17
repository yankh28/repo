#include <stdio.h>
#include <iostream>

int main()
{
	int i=0;
	FILE* f;
	f=fopen("text.txt", "r");
	if (!f)
	{ 
		f=fopen("text.txt", "w");
		printf("File was created by me\n");
	}
	else printf("File wasn't created by me\n");
	fprintf(f,"%d", 4555);
	printf("Typing...\n");
	printf("Press any key.\n");
	fclose(f);
	getchar();
return 0;
}

	
