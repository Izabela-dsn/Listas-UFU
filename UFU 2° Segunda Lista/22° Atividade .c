#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		int I, t;
		setlocale(LC_ALL,"portuguese");
		printf("Coloque sua idade e seu tempo de contribuição respectivamente: ");
		scanf("%i%i", &I, &t);
		if((I>=65)||(t>=30)||(I>=60 && t>=25)){
			printf("Já pode se aposentar.");
		}
		else{
			printf("Ainda não pode aposentar.");
		}
		return 0;
		getch();
	}
