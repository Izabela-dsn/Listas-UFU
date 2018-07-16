#include <stdio.h>
#include <conio.h>
	int main(){
		double d, h, t;
		printf("coloque a altura do degrau e a altura que deseja chegar em centimetros:\n");
		scanf("%lf%lf", &d,&h);
		t = (h/d);
		printf("Voce devera subir %.1lf", t);	
		
		
	getch();
	return 0;
	}
