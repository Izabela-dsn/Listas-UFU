#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int matriz[4][4], i, j, cont;
		printf("Adicione 16 n�meros: ");
		
		
		for(i=0; i<4; i++){
			for(j=0; j<4; j++){
				scanf("%d", &matriz[i][j]);
				printf("%d ", matriz[i][j]);
			}
			printf("\n");	
		}
		
		for (i=0; i<4; i++){
			for(j=0; j<4; j++){
				if(matriz[i][j]>10){
					cont++;
				}
			}
		}
		printf("\nA quantidade de n�meros maior que 10 �: %d", cont);
		
		
	
			
		getch();
		return 0;
	}
