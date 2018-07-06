#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		float v, c;
		printf("Coloque o valor da venda:");
		scanf("%f", &v);
		if (v<20.000) 
			printf("Comissão: %.2f", c = 400+v*14/100);
	 	if((v<40.000)&&(v>=20.000))
	 		printf("Comissão: %.2f", c = 500+v*14/100);
	 	if((v<60.000)&&(v>=40.000))
	 		printf("Comissão %.2f", c= 550+v*14/100);
	 	if ((v<80.000)&&(v>=60.000))
	 		printf("Comissão: %.2f", c=600+v*14/100);
	 	if((v<100.000)&&(v>=80.000))
	 		printf("Comissão: %.2f", c=650+v*14/100);
	 	if(v>=100.000)
	 		printf("Comissão: %.2f", c=700+v*16/100);
		getch ();
		return 0;
	}
