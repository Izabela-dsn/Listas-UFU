#include <stdio.h>
#include <conio.h>
#include <locale.h>
 
 	int main (void){
 		setlocale(LC_ALL,"portuguese");
 		float N[10], Q[10];
 		int i;
 		printf("Adicione 10 números: ");
 		for (i=0; i<10; i++){
 			scanf("%f", &N[i]);
 			printf("-> %.1f\n", N[i]);
		 }
		 printf("\nO quadrado dos valores acima:\n");
		for (i=0; i<10; i++){
			printf("-> %.1f\n", Q[i] = N[i]*N[i] );
		}
	
 		getch();
		return 0;	
	 }
