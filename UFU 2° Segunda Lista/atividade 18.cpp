#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int e, a, b;
		printf("Escolha uma opera��o matem�tica digitando o n�mero correspondente a ela:\n1(+ adi��o) 2(- subtra��o) 3(/ divis�o) 4(x multiplica��o) : ");
		scanf("%i", &e);
		switch(e){
			case 1: printf("Adicione dois n�meros: ");
					scanf("%i%i", &a,&b);
					printf("Resultado: %i", a+b);
					break;
			case 2: printf("Adicione dois n�meros: ");
					scanf("%i%i", &a,&b);
					printf("Resultado: %i", a-b);
					break;
			case 3: printf("Adicione dois n�meros: ");
					scanf("%i%i", &a,&b);
					printf("Resultado: %i", a/b);
					break;
			case 4: printf("Adicione dois n�meros: ");
					scanf("%i%i", &a,&b);
					printf("Resultado: %i", a*b);
					break;
					
				
					
		}
		
		
		
		getch();
		return 0;
	}
