#include <stdio.h>
#include <conio.h>
#include <locale.h>

 
	int main() { 
	setlocale(LC_ALL,"portuguese");
	int j=0, i, k;
	printf("Contando de 0 a 100 com três laços de repetição: \n");
	for (i=0; i<=100; i++) {
		while (j<=100){{
		printf(" \n%d -- %d", i, j); 
		j++;}
		break;}
	}
		do {
			printf("\n%d", k);
			k++;
		}
			while(k<=100);
	 
		return 0;
		getch ();	
}
	
