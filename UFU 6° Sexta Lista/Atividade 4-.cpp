#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		
		struct curso{
			int matricula;
			char nome[30];
			float nota1;
			float nota2;
			float nota3;
		};
	
		struct curso alunos[5];
		
		int i;
		int maiornota1 = 0;
		printf("Entre com as informções dos alunos:\n");
		for(i=0; i<5; i++){
			printf("\n%i°aluno Digite o número da matrícula: ", i+1);
			scanf("%i", &alunos[i].matricula);
			
			fflush(stdin);
			
			printf("%i°aluno Digite o nome: ", i+1);
			gets(alunos[i].nome);
			
			printf("%i°aluno Digite a nota das três provas respectivamente: ", i+1);
			scanf("%f%f%f", &alunos[i].nota1, &alunos[i].nota2, &alunos[i].nota3);
			
			if (alunos[i].nota1 > maiornota1)
            maiornota1 = alunos[i].nota1;
		}
		
			for(i=0; i<5; i++){
				if(maiornota1 == alunos[i].nota1) {
            		printf("\nNome do aluno(a) com a maior nota da primeira prova: %s\n", alunos[i].nome);
        		}
			}
			
			float media, soma=0;
			for(i=0; i<5; i++){
				soma=soma+alunos[i].nota1+alunos[i].nota2+alunos[i].nota3;
				media=soma/2;
				printf("\n%i° aluno %s média: %.2f", i+1, alunos[i].nome, media );

				if(media>=6)
					printf("\nAluno %s aprovado.\n", alunos[i].nome);
				else
					printf("\nAluno %s reprovado\n", alunos[i].nome);	
			}
		getch();
		return 0;	 
	}
