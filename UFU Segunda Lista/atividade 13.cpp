#include <stdio.h>
#include <conio.h>
#include <locale.h>
	
	int main(){
		setlocale(LC_ALL,"portuguese");
		float p1, p2, p3, T;
		printf("Adicione 3 notas de provas: ");
		scanf("%f%f%f", &p1, &p2, &p3);
		T = (p1 + p2 + p3*2 )/ 1 + 1 + 2;
		if(T>60){
			printf("A média do aluno é: %.2f \nO aluno foi aprovado.", T);
		}	
		else{
			printf("A média foi: %.2f \nO aluno foi reprovado.", T);
		}
	
	return 0;
	getch();
	}
