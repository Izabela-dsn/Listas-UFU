#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int cont = 1;
		printf("Cinco primeiros números múltiplos de 3:\n");
		while(cont <= 5){
			printf("%i\n", cont*3);
			cont++;
		}
		return 0;
		getch();
	}
