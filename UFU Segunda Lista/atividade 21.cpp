#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		int e;
		setlocale(LC_ALL,"portuguese");
		printf("Escolha uma op��o:\n 1- Soma de 2 n�meros.\n 2- Diferen�a entre 2 n�meros.\n 3- Produto entre 2 n�meros.\n 4- Divis�o entre 2 n�meros.\n Op��o: ");
		scanf("%i", &e);
		float a, b;
		printf("Adicione dois n�meros: ");
		scanf("%f%f", &a, &b);
		switch(e){
			case 1: printf("Resultado: %.2f", a+b);
					break;
			case 2: if (a>b){
					printf("Resultado: %.2f", a-b);
				}
			 	else{
			 		printf("Resultado: %.2f", b-a);
				 }
				 break;
			case 3:	printf("Resultado: %.2f", a*b);
				break;
			case 4: if(a/b)
					printf("Resultado: %.2f", a/b);
				else{
					printf("o denominador n�o pode ser zero");
				}	
				break;
				 
			default: printf("Op��o Inv�lida.");
			}
		
		getch();
		return 0;	
}
