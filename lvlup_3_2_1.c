#include <stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
	int i=0, length=0,n_length,quantity=0;
	setlocale(0,"");
	char *string;
	for (;;){	
	printf("Put size of the string here: ");
		fflush(stdin);
		quantity=scanf("%d",&n_length);
		if (!quantity || n_length<=0) printf("INCORRECT INPUT\n");
		else break;
	}
	string=(char*)malloc(100*sizeof(char));						//выделяем память 
	if(!string){
		printf("FATAL ERROR WITH MEMORY");						//если память не выделилась конец программы
		return 0;
	}
	fflush(stdin);												//чистка буфера клавиатуры
	printf("Put your string here:\n");
	fgets(string,n_length,stdin);								//ввод с контролем
	quantity=0;
	while(*(string+i)!='\0')
	{															//пока не конец строки выполняем 
		while(*(string+i)==' ') i++;							//если в строке есть пробелы, то пропускаем их, наращивая i
		while(*(string+i)!=' ' && *(string+i)!='\0')
		{														//если в строке находится не пробел и не нуль-терминатор, то считаем длину слова
			i++;
			length++;											//счетчик длины слова
		}	
		if (length>0) quantity++;
		length=0;
	}
	system("cls");
	printf("\tThe line is: ");
	i=0;
	while(*(string+i)!='\0'){
		printf("%c",*(string+i));
		i++;
	}
	printf("\n");

	printf ("\tQuantity of words(including symbols) in the line is \t%d pcs", quantity);
	getchar();
	return 0;
}
