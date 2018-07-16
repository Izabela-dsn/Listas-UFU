#include <stdio.h>
#include <conio.h>

	int conversao (int horas, int min, int seg){
		 int convh, convm;
		 convh = (3600*horas);
		 convm = (60*min);
		 printf("%i horas em segundos: %i.\n%i minutos em segundos: %i.\nE os segundos: %i.", horas, convh, min, convm, seg);
	}
	
	int main(void){
		int h, m, s;
		printf("Adicione um horario com hora, minuto e segundo: ");
		scanf("%i%i%i", &h,&m,&s);
		conversao(h,m,s);
		
		return 0;
		getch ();
		
	}
	
