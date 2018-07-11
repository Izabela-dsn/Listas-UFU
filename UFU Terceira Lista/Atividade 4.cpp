#include <stdio.h>
#include <conio.h>

	int main(){
		int inicio=0;
		while (inicio <= 100.000){
			printf("%i\n ", inicio*1000);
			++inicio;
		}
		getch();
		return 0;
	}
