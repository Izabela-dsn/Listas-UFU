#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL,"portuguese");
		int A[10], B[10], C[10], i;
		printf("Adicione dez números de sua preferencia: ");
		for(i=0; i<10; i++)
			scanf("%d", &A[i]);
			
		printf("Adicione mais dez números de sua preferencia: ");
		for(i=0; i<10; i++)
			scanf("%d", &B[i]);
		
		printf("\nA subtração desses conjuntos de números será:\n");	
		for(i=0; i<10; i++)	
		printf("%d\t", C[i]=A[i]-B[i]);
		
		getch();
		return 0;
	}
