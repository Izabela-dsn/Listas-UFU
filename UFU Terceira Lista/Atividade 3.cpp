#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int cr = 10;
		printf("Moonwalk de n�meros:\n");
		while(cr>=0){
			printf("%i\n", cr);
			--cr;
		}
		printf("FIM!");
		return 0;
		getch();
	}
