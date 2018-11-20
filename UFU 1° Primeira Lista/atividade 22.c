#include <stdio.h>
#include <conio.h>

	int main(){
		double J, M;

		printf("Coloque uma medida em Jardas: ");
		scanf("%lf", &J);
		M = 0.91 * J;
		printf("Essa medida em Metros: %.2lf", M);


		getch();
		return 0;
	}
