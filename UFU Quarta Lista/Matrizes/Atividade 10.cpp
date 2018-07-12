#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		int l, c, mat[3][3], somaprincipal;
		setlocale(LC_ALL,"portuguese");
		
			printf("Adicone nove números: ");
			
			for (l=0; l<3; l++){
				for(c=0; c<3; c++){
					scanf("%i", &mat[l][c]);
					printf(" %i", mat[l][c]);
				}
				printf("\n");
			}
			
			for(l=0; l<3; l++){
				for(c=0; c<3; c++){
					if(l==c){
						somaprincipal += mat[l][c];
					}
				}
			}
			printf("A soma da diagonal principal e: %i", somaprincipal);
			
		return 0;
		getch();
		
	}
