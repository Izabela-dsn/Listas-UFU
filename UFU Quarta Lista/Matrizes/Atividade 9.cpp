#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		int mat[3][3], l, c, somabaixo=0;
		setlocale(LC_ALL,"portuguese");
			printf("Adicione nove números: ");
			
			for(l=0; l<3; l++){
				for(c=0; c<3; c++){
					scanf("%i", &mat[l][c]);
					printf(" %i", mat[l][c]);
				}
				printf("\n");
			}
			
			for(l=0; l<3; l++){
				for(c=0; c<3; c++){
					if(l>c){
						somabaixo += mat[l][c];
					}
				}
			}
			
			printf("\n A soma dos números abaixo da diagonal principal: %i", somabaixo);
			
		return 0;
		getch();
		 
	}
