#include <stdio.h>
#include <conio.h>

	int main(void){
		int b[6], i;
		printf("Adicione seis valores: ");
		
		for(i=0;i<6;i++){
			scanf("%d", &b[i]);
			printf("%d\t", b[i]);	
		}
		printf("\nEsses foram os valores digitados.");
		getch();
		return 0;
	}
