#include <stdio.h>
#include <conio.h>

	int main(){
		char string[10];
		printf("Digite uma string: ");
		gets(string);
		
		int i;
		char ch={'0'}, sh={'1'};
		for(i=0; i<10; i++){
			if(string[i]==ch){
				string[i]=sh;
			}
		}
		printf("\n%s", string);
		getch();
		return 0;
	}
