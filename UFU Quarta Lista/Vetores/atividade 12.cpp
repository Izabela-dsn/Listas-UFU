#include <stdio.h>
#include <conio.h>
#include <locale.h>

	 int main(void){
	 	setlocale(LC_ALL,"portuguese");
	 	int vet[5], i, M, m, total, media;
	 	printf("Adicione cinco números: ");
	 	for (i=0; i<5; i++)
	 		scanf("%d", &vet[i]);
	 		
	 	printf("\nO vetor:\n");	
	 	for(i=0; i<5; i++)	
	 		printf("%d\t", vet[i]);
	 	
	 	M=vet[0];//maior
		m=vet[0];//menor
		
		for(i=0; i<5; i++){
			if(vet[i]>M)M=vet[i];
			if(vet[i]<m)m=vet[i];
		}
		
		printf("\nO maior elemento do vetor: %d \nO menor elemento do vetor: %d", M, m);
		
		for (i=0; i<5; i++)
			total += vet[i];
			
		media = total/5;
		
		printf("\nA média é %d", media);	
	
		getch();
		return 0;	
	 }
