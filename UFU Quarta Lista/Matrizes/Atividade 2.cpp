#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		int mat[5][5] = {{1,0,0,0,0},{0,1,0,0,0},{0,0,1,0,0},{0,0,0,1,0},{0,0,0,0,1}};
		
		printf("Matriz [5][5] com diagonal principal preenchido com 1.\n\n");				 
		for(int i=0; i<5; i++){
			for (int j=0; j<5; j++){
				printf("%d ", mat[i][j]);
			}
			printf("\n");	
		}
		getch();
		return 0;				 
	}
