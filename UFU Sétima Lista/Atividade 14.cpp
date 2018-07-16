#include <stdio.h>
#include <conio.h>


	float quantidadedistancia(float distancia, float litros){
		float consumo;
		consumo = distancia/litros;
		if(consumo<8)
			printf("Venda o carro!");
		else if(consumo>14)
			printf("Super Econ%cmico!", 147);
		if(consumo<12 && consumo>=8)
			printf("Econ%cmico!", 147);
		
		getch();		
	}
	
	int main(){
		float km, l;
		printf("**Sobre seu carro de acordo com o consumo.**\n\n");
		printf("Digite a dist%cncia e a quantidade de litros de gasolina: ", 131);
		scanf("%f%f", &km,&l);
		quantidadedistancia(km,l);
		
		getch();
		return 0;
	}
