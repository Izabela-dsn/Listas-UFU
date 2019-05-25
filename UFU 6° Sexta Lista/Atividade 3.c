#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		printf("****Dados de 5 alunos.****\n\n");
		
		struct dados{
			char nome[25];
			int matricula;
			char curso[40];
		}; 
		
		struct dados estudante[5];
		
		int i;
		for(i=0; i<5; i++){
			printf("%i° Aluno. Digite o nome: ", i+1);
			gets(estudante[i].nome);
			
			printf("%i° Aluno. Digite o numero de matrícula: ", i+1);
			scanf("%i", &estudante[i].matricula);
			
			fflush(stdin);
			
			printf("%i° Aluno. Digite o nome do seu curso: ", i+1);
			gets(estudante[i].curso);
			
			printf("\n");
			
		}
			printf("\n\n\n");
			printf("***Informações.***\n");
		
		for(i=0; i<5; i++){
		
			printf("%i° Aluno. Nome: %s", i+1, estudante[i].nome);
			printf("%i° Aluno. Numero da Matrícula: %i", i+1, estudante[i].matricula);
			printf("%i° Aluno. Nome do curso: %s\n", i+1, estudante[i].curso);
			printf("\n");
							
		}	
			return 0;
			getch();
	}
