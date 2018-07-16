#include <stdio.h>
#include <locale.h>

	 int main(){
	 	setlocale(LC_ALL,"portuguese");
	 	int o; 
		float i, a, b;
			inicio:
	 		printf("Escolha entre as conversões: \n 1)Km/h para m/s \n 2)m/s para Km/h \n 0)Para sair \n Escolha: ");
	 		scanf("%d", &o);
	 	while(o!=0){
	 	
	 		switch(o){
	 			case 1: printf("Digite o valor em Km/h: ");
	 				scanf("%f", &a);
	 				printf("O valor em m/s é: %.2f\n\n",i= a/3.6 );
	 				goto inicio;
	 				
	 			case 2: printf ("Digite o valor em m/s: ");
	 				scanf("%f", &b);
	 				printf("O valor em Km/h é: %.2f\n\n",i= b*3.6);
	 				goto inicio;
	 				
	 		
			 }
		 }
		 return 0;
	 }
