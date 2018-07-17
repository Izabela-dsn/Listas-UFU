#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(void){
		setlocale(LC_ALL,"portuguese");
		printf("***Alunos e médias finais.***\n\n");
		
		struct alunos{
			int matricula;
			char nome[30];
			int disciplina;
			float nota1, nota2;
			
		};
		
		struct alunos notas[10];
		
		int i;
		for(i=0; i<10; i++){
			printf("%i° Aluno. Digite a matrícula: ", i+1);
			scanf("%i", &notas[i].matricula);
			
			fflush(stdin);
			
			printf("%i° Aluno. Digite o nome: ", i+1);
			gets(notas[i].nome);
			
			printf("%i° Aluno. Digite o código da disciplina: ", i+1);
			scanf("%i", &notas[i].disciplina);
			
			printf("%i° Aluno. Digite a primeira nota: ", i+1);
			scanf("%f", &notas[i].nota1);
			
			fflush(stdin);
			
			printf("%i° Aluno. Digite a segunda nota: ", i+1);
			scanf("%f", &notas[i].nota2);
			
			fflush(stdin);
			
			printf("\n");
		}
		for(i=0; i<10; i++){
			printf("%i° Nome:%s -> Média Final: %.2f", i+1, notas[i].nome, notas[i].nota1*1.0+notas[i].nota2*2.0/1.0+2.0);
			printf("\n");
		}
		
		getch();
		return 0;
	}
	
