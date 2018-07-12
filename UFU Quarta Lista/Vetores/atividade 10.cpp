#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL,"portuguese");
		float notas[15], media=0, total=0;
		int i;
		printf("Coloque as 15 notas das provas dos alunos:\n");
		for (i=0;i<15;i++)
			scanf("%f", &notas[i]);
		
		for (i=0;i<15;i++)
			total += notas[i];
			
		media = total/15;
		
		printf("A média geral é %.2f", media);	
	
		getch();
		return 0;
		
	}
