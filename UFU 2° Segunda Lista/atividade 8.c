#include <stdio.h>
#include <conio.h>
	int main(){
		float n1, n2;
		printf("Adicione 2 notas de um aluno:");
		scanf("%f%f", &n1,&n2);
		if (10.0 > n1 > 0.0 && 10.0 > n2 > 0.0){
			printf("A media das notas sera: %.2f", (n1+n2)/2);
			}
		else{
			printf("Notas nao permitidas.\nFim do programa.\nPressione Enter 2 vezes");
			}
		
		getch();
		return 0;
	}
