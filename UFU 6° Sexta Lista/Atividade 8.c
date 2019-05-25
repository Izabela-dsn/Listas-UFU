#include <stdio.h>
#include <conio.h>


	int main(){
		
		struct INFO{
			char nome[50];
			int idade;
			char sexo[10];
			char CPF[12];
			int codigo;
			char cargo[30];
			int dia, mes, ano;
		}; 

		INFO trabalhador[2];
		printf("**REGISTRO DE DADOS.**\n");
		
		int i;
		for(i=0; i<2; i++){
			
			printf("\n%i%cfuncionario-Digite o nome: ", i+1, 167);
			gets(trabalhador[i].nome);
			
			printf("%i%cfuncionario-Digite a idade e o CPF(sem espa%cos): ", i+1,167,135);
			scanf("%i %s", &trabalhador[i].idade, trabalhador[i].CPF);
			
			fflush(stdin);
			
			printf("%i%cfuncionario-Digite o sexo: ", i+1,167);
			gets(trabalhador[i].sexo);
			
			printf("%i%cfuncionario-Digite o C%cdigo do Setor(0-99) onde trabalha: ", i+1,167,162);
			scanf("%i", &trabalhador[i].codigo);
			fflush(stdin);
			
			printf("%i%cfuncionario-Digite o cargo: ", i+1,167);
			gets(trabalhador[i].cargo);
			
			printf("%i%cfuncionario-Digite a data de nascimento(d m aaaa): ", i+1,167);
			scanf("%i %i %i", &trabalhador[i].dia, &trabalhador[i].mes, &trabalhador[i].ano);
			fflush(stdin);
		}
		
		printf("\n**DADOS DOS FUNCION%cRIOS.**\n\n",160);
		
		for(i=0; i<2; i++){
			printf("\n%i%cfuncionario-Nome:%s\n ", i+1,167, trabalhador[i].nome);
			printf("%i%cfuncionario-Idade:%i\n ", i+1,167, trabalhador[i].idade);
			printf("%i%cfuncionario-CPF:%s\n ", i+1,167, trabalhador[i].CPF);
			printf("%i%cfuncionario-Sexo:%s\n ", i+1,167, trabalhador[i].sexo);
			printf("%i%cfuncionario-C%cdigo do setor:%i\n ", i+1,167,162, trabalhador[i].codigo);
			printf("%i%cfuncionario-Cargo:%s\n ", i+1,167, trabalhador[i].cargo);
			printf("%i%cfuncionario-Data de Nascimento:%i/%i/%i\n ", i+1,167, trabalhador[i].dia, trabalhador[i].mes, trabalhador[i].ano);
			
		}
		getch();
		return 0;
		
	}
