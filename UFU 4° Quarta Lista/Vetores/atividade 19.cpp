#include <stdio.h>
#include <conio.h>

	int main(){
		int i;
		int vet[50];
		printf("Vetor de 50 algarismos:\n");
		
		printf("Preenchido com (i+5*i) porcentagem (i+1)\n");
		for (i=0; i<50; i++){
			vet[i]= (i+5*i) % (i+1);
			printf("%d\t", vet[i]);
		}
		
		printf("\n\n");
		
		printf("Preenchido com (i+5*i)\n");		
			for (i=0; i<50; i++){
			vet[i]= (i+5*i);
			printf("%d\t", vet[i]);
		}
		
		
		getch();
		return 0;
	}
	
