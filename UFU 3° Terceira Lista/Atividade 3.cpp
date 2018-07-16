#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int cr = 10;
		printf("Moonwalk de números:\n");
		while(cr>=0){
			printf("%i\n", cr);
			--cr;
		}
		printf("FIM!");
		return 0;
		getch();
	}
