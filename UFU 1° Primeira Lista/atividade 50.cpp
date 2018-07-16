#include <stdio.h>
#include <conio.h>

	int main(){
		int N, AN, I;
		printf("coloque sua idade e o ano em que estamos: ");
		scanf("%i%i", &I, &AN);
		N = AN - I-1;
		printf("o ano em que voce nasceu e: %i", N);
		
		getch();
		return 0;
	}
