#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		int positivonegativo (int n);
		int num;
		printf("Digite um numero: ");
		scanf("%i", &num);
		positivonegativo(num);
		
		return 0;
		getch ();
	}
	
	int positivonegativo (int n){
		if(n>0)
			printf(" 1 (positivo)");
		else if(n==0)
			printf(" 0 (zero)");
		else 
			printf(" -1 (negativo)");
		
		getch();			
	}
