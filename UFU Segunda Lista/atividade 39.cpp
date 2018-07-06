#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		float s, t, n;
		printf("Coloque o valor do salário atual do funcionário e o tempo de serviço em anos: ");
		scanf("%f%f", &s, &t);
		if (s<=500.00){
			if (t<1) printf("Sem bônus. Salário reajustado: %.2f", n = s+s*25/100);
			if ((t>=1)&&(t<=3)) printf("Com Bônus e Salário reajustado: %.2f", n = 100+s+s*25/100);
			if ((t>=4)&&(t<=6)) printf("Com Bônus e Salário reajustado: %.2f", n = 200+s+s*25/100);
			if ((t>=7)&&(t<=10))printf("Com Bônus e Salário reajustado: %.2f", n = 300+s+s*25/100);
			if (t>10) printf("Com Bônus e Salário reajustado %.2f", n = 500+s+s*25/100);
		}
		if ((s>500.00)&&(s<=1000.00)){
			if (t<1) printf("Sem bônus. Salário reajustado: %.2f", n = s+s*20/100);
			if ((t>=1)&&(t<=3)) printf("Com Bônus e Salário reajustado: %.2f", n = 100+s+s*20/100);
			if ((t>=4)&&(t<=6)) printf("Com Bônus e Salário reajustado: %.2f", n = 200+s+s*20/100);
			if ((t>=7)&&(t<=10))printf("Com Bônus e Salário reajustado: %.2f", n = 300+s+s*20/100);
			if (t>10) printf("Com Bônus e Salário reajustado %.2f", n = 500+s+s*20/100);
		}
		if ((s>1000.00)&&(s<=1500.00)){
			if (t<1) printf("Sem bônus. Salário reajustado: %.2f", n = s+s*15/100);
			if ((t>=1)&&(t<=3)) printf("Com Bônus e Salário reajustado: %.2f", n = 100+s+s*15/100);
			if ((t>=4)&&(t<=6)) printf("Com Bônus e Salário reajustado: %.2f", n = 200+s+s*15/100);
			if ((t>=7)&&(t<=10))printf("Com Bônus e Salário reajustado: %.2f", n = 300+s+s*15/100);
			if (t>10) printf("Com Bônus e Salário reajustado %.2f", n = 500+s+s*15/100);
		}
		if ((s>1500.00)&&(s<=2000.00)){
			if (t<1) printf("Sem bônus. Salário reajustado: %.2f", n = s+s*10/100);
			if ((t>=1)&&(t<=3)) printf("Com Bônus e Salário reajustado: %.2f", n = 100+s+s*10/100);
			if ((t>=4)&&(t<=6)) printf("Com Bônus e Salário reajustado: %.2f", n = 200+s+s*10/100);
			if ((t>=7)&&(t<=10))printf("Com Bônus e Salário reajustado: %.2f", n = 300+s+s*10/100);
			if (t>10) printf("Com Bônus e Salário reajustado %.2f", n = 500+s+s*10/100);
		}
		if (s>2000.00){
			if (t<1) printf("Sem bônus. Salário sem reajuste.");
			if ((t>=1)&&(t<=3)) printf("Com Bônus e Salário sem reajuste: %.2f", n = 100+s);
			if ((t>=4)&&(t<=6)) printf("Com Bônus e Salário sem reajuste: %.2f", n = 200+s);
			if ((t>=7)&&(t<=10))printf("Com Bônus e Salário sem reajuste: %.2f", n = 300+s);
			if (t>10) printf("Com Bônus e Salário sem reajuste %.2f", n = 500+s);
		}
	getch();	
	return 0;			
	}
