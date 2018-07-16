#include <stdio.h>
#include <conio.h>

	bool comparastrings(char st1[50], char st2[50]){
		int i=0;
		while(st1[i]==st2[i] && st1[i] != '\0' && st2[i] != '\0'){
			i++;
		}
		if(st1[i]=='\0' && st2[i]=='\0'){
			return 1;
		}
		else{
			return 0;
		}
	}
	int main() {
		char string1[50], string2[50];
		printf("Digite uma string: ");
		gets(string1);
		printf("Digite outra string: ");
		gets(string2);
		
		if(comparastrings(string1,string2)){
			printf("\nS%co iguais", 198);
		}	
		else{
			printf("\nN%co s%co iguais", 198, 198);
		}
		getch();
		return 0;
	}
