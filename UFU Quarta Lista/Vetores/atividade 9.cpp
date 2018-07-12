#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL,"portuguese");
		int p[6], i; 
		printf("Digite seis números pares: ");
		for(i=0; i<6; i++)
			scanf("%d", &p[i]);
			
		printf("\nOs números pares digitados em ordem inversa:\n");	
		for(i=6; i>=0; i--)
			if (p[i]%2==0)
				printf("%d\t", p[i]);
		
		//	else if(p[i]%2!=0) printf("Há um número que não é par."); //
		
		getch();
		return 0;
		
	}
