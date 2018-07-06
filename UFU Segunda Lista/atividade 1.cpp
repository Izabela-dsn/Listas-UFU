#include <stdio.h>
#include <conio.h>
	int main(){
		float a, b;
		printf("coloque dois numeros:");
		scanf("%f%f", &a,&b);
		if( a > b){
			printf("O maior e': %.2f", a);
		}
		else {
			printf("o maior e': %.2f",b);
		}
	getch();
	return 0;
	}
