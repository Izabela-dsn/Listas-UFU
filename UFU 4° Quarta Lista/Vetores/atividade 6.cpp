#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL,"portuguese");
		int vet[10], i, M, m;
		printf("Adicione dez números de sua preferência: ");
		for(i=0; i<10; i++)
			scanf("%d", &vet[i]);
			
		M=vet[0];//maior
		m=vet[0];//menor
		
		for(i=0; i<10; i++){
			if(vet[i]>M)M=vet[i];
			if(vet[i]<m)m=vet[i];
		}
		
		printf("\nO maior elemento do vetor: %d \nO menor elemento do vetor: %d", M, m);
		
		getch();
		return 0;	
	}
