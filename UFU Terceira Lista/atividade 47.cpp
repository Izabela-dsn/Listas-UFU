#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int o;
		float n1, n2, t;
		
		do {
			printf("Escolha entre as opções: \n 1)Adição \n 2)Subtração \n 3)Multiplicação \n 4)Divisão \n 5)Sair \n Escolha: ");
			scanf("%i", &o);
				switch(o){
					case 1: printf("Adicione dois números: ");
							scanf("%f%f", &n1,&n2);
							printf("Você escolheu soma. A somatória será: %.2f\n\n", t=n1+n2); 
							break;
							
					case 2: printf("Adicione dois números: ");
							scanf("%f%f", &n1,&n2);
						    printf("Você escolheu subtração. O resultado será: %.2f\n\n", t=n1-n2); 
							break;
							
					case 3: printf("Adicione dois números: ");
							scanf("%f%f", &n1,&n2);
						 	printf("Você escolheu multiplicação. O resultado será: %.2f\n\n", t=n1*n2);
						 	break;
						 	
					case 4: printf("Adicione dois números: ");
							scanf("%f%f", &n1,&n2);
							printf("Você escolheu divisão. O resultado será: %.2f\n\n", t=n1/n2); 
							break;
							
					default: if(o>5 || o<=0) printf("Número inválido.\n\n"); 
				}
			} while (o!= 5);
			
		return 0;
	}
