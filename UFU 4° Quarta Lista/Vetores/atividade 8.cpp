#include <stdio.h>
#include <conio.h>
#include <locale>

	int main(void){
		setlocale(LC_ALL,"portuguese");
		int oi[6], i;
		printf("Digite seis n�meros de sua preferencia: ");
		for(i=0; i<6; i++)
			scanf("%d", &oi[i]);
			
		printf("Os seis n�meros em ordem inversa:\n");	
		for (i=5; i>=0; i--)
			printf("%d\t", oi[i]);
		
		return 0;
		getch();
	}
