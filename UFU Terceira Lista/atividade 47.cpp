#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int o;
		float n1, n2, t;
		
		do {
			printf("Escolha entre as op��es: \n 1)Adi��o \n 2)Subtra��o \n 3)Multiplica��o \n 4)Divis�o \n 5)Sair \n Escolha: ");
			scanf("%i", &o);
				switch(o){
					case 1: printf("Adicione dois n�meros: ");
							scanf("%f%f", &n1,&n2);
							printf("Voc� escolheu soma. A somat�ria ser�: %.2f\n\n", t=n1+n2); 
							break;
							
					case 2: printf("Adicione dois n�meros: ");
							scanf("%f%f", &n1,&n2);
						    printf("Voc� escolheu subtra��o. O resultado ser�: %.2f\n\n", t=n1-n2); 
							break;
							
					case 3: printf("Adicione dois n�meros: ");
							scanf("%f%f", &n1,&n2);
						 	printf("Voc� escolheu multiplica��o. O resultado ser�: %.2f\n\n", t=n1*n2);
						 	break;
						 	
					case 4: printf("Adicione dois n�meros: ");
							scanf("%f%f", &n1,&n2);
							printf("Voc� escolheu divis�o. O resultado ser�: %.2f\n\n", t=n1/n2); 
							break;
							
					default: if(o>5 || o<=0) printf("N�mero inv�lido.\n\n"); 
				}
			} while (o!= 5);
			
		return 0;
	}
