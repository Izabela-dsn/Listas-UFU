#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL,"portuguese");
		int vet[5], i, m, M, pM, pm;
		printf("Adicione cinco números: ");
		for (i=0; i<5; i++)
			scanf("%d", &vet[i]);
			
		M=vet[0];
		m=vet[0];
		
		for(i=0; i<5; i++){
			if(vet[i]>M){
			M=vet[i];
			pM=i;
			}
		}
		for (i=0; i<5; i++){
			if(vet[i]<m){
			m=vet[i];
			pm=i;
			}
		}
		
		printf("\nO maior elemento do vetor: %d \nO menor elemento do vetor: %d", M, m);
		printf("\nO maior fica localizado em vet[%d]", pM);
		printf("\nO menor fica localizdo em vet[%d]", pm);
		
		getch();
		return 0;
	}
