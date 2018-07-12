#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		int l, c, mat[3][3], somasecundaria;
		setlocale(LC_ALL, "portuguese");
			
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
					if(l+c==2){
						somasecundaria += mat[l][c];
					}	
				}
			}
			printf("\n A soma da diagonal secundária : %i", somasecundaria);
		
		getch();
		return 0;	
	}
	
	
