#include <stdio.h>
#include <conio.h>

	float notas (float n1, float n2, float n3, char x){
		float total;
		if (x == 65){
			total = n1 + n2 + n3 / 3;
			printf("Com a letra escolhida essa sera a media aritmetica: %.2f\n", total);	
		}
		else if (x == 80){
			total = n1*5+n2*3+n3*2/5+3+2;
			printf("Com a letra escolhida essa sera a meia ponderada: %.2f ", total );
		}
		getch();		
	}
	
	/*	PARA TESTE :
		int main(){
		float a, b, c;
		char y;
		printf("tres notas e um letra A ou P: ");
		scanf("%f %f %f %c", &a,&b, &c, &y);
		notas(a,b,c,y);
		
		getch();
		return 0;
		
	}*/
