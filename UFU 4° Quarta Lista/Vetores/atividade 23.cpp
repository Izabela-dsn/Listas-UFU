#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL,"portuguese");
		int x[5], y[5], i;
		printf("Adicione cinco números: ");
		for (i=0; i<5; i++)
			scanf("%d", &x[i]);
		
		printf("Adicione mais cinco números: ");
		for (i=0; i<5; i++)
			scanf("%d", &y[i]);
		
		printf("Os conjuntos : \n");	
		for (i=0; i<5; i++)
			{
			printf("%d\t", x[i]);
			printf("\t%d\n", y[i]);
			}
			
		printf("\nE o produto escalar:\n");	//Por questão de estética minha adicionei este for//
		for (i=0; i<5; i++)
		printf("%d\t", x[i]*y[i]);
			
		getch();
		return 0;
	}
