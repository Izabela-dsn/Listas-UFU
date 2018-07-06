#include <stdio.h>
#include <conio.h>
#include <math.h>
	int main(){
		int a, r;
		printf("Coloque qualquer numero:");
		scanf("%i", &a);
		r = sqrt( a );
		if (a>0){
			printf("A raiza quadrada desse numero sera: %i", r);
		}
		else{
			printf("Numero invalido");
		}
		getch();
		return 0;
	}
