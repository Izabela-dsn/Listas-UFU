#include <stdio.h>
#include <conio.h>
#include <string.h>

    struct info{
			char nome[30];
			char endereco[50];
			char telefone[9];
		};
		info pessoal[2];
		
		
	
		
	int main(){
	    void enderecordem (int tamanho);
		void nomesordem (int tamanho);
		printf("***Nomes e enderecos em ordem alfabetica.***\n\n");
		
		int k;
		for(k=0; k<5; k++){
			printf("\n%i%cpessoa-Digite o nome: ",k+1,167);
			gets(pessoal[k].nome);
			fflush(stdin);
			printf("%i%cpessoa-Digite o endere%co: ",k+1,167,135);
			gets(pessoal[k].endereco);
			fflush(stdin);
			printf("%i%cpessoa-Digite o telefone para contato: ",k+1,167);
			gets(pessoal[k].telefone);
			fflush(stdin);
		}
				
		for(k=0; k<5; k++){
			nomesordem(5);
			enderecordem(5);
			
			printf("\nNome: %s\n", pessoal[k].nome);
			printf("Endere%co: %s %s\n",135, pessoal[k].endereco);
			printf("Telefone: %s\n", pessoal[k].telefone);
		}
		getch();
		return 0;
	}
	
	void nomesordem (int tamanho){
		
		
		char noma[100];
		for(int k=0; k<tamanho; k++){
			for(int j=k; j>0; j--){
				if(strcoll(pessoal[j].nome, pessoal[j-1].nome)<0){
					strcpy(noma, pessoal[j].nome);
					strcpy(pessoal[j].nome, pessoal[j-1].nome);
					strcpy(pessoal[j-1].nome,noma);	
				}	
			}
		}
	}
	
	void enderecordem (int tamanho){
		char end[150];
		for(int k=0; k<tamanho; k++){
			for(int j = k; j>0; j--){
				if(strcoll(pessoal[j].endereco, pessoal[j-1].endereco)<0){
					strcpy(end,pessoal[j].endereco);
					strcpy(pessoal[j].endereco, pessoal[j-1].endereco);
					strcpy(pessoal[j-1].endereco, end);
				}
			}
		}
	}	
