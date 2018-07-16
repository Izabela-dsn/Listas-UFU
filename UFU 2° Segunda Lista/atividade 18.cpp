#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int e, a, b;
		printf("Escolha uma operação matemática digitando o número correspondente a ela:\n1(+ adição) 2(- subtração) 3(/ divisão) 4(x multiplicação) : ");
		scanf("%i", &e);
		switch(e){
			case 1: printf("Adicione dois números: ");
					scanf("%i%i", &a,&b);
					printf("Resultado: %i", a+b);
					break;
			case 2: printf("Adicione dois números: ");
					scanf("%i%i", &a,&b);
					printf("Resultado: %i", a-b);
					break;
			case 3: printf("Adicione dois números: ");
					scanf("%i%i", &a,&b);
					printf("Resultado: %i", a/b);
					break;
			case 4: printf("Adicione dois números: ");
					scanf("%i%i", &a,&b);
					printf("Resultado: %i", a*b);
					break;
					
				
					
		}
		
		
		
		getch();
		return 0;
	}
