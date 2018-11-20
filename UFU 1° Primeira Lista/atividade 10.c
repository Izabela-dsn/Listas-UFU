#include <stdio.h>
#include <conio.h>

 int main(){
    	float K, M;

	 printf("Digite a velocidade em km/h: ");
	 scanf("%f", &K);
	  M = K/ 3.6;
     printf("Velocidade em m/s: %.2f", M);

     getch();
     return 0;
}
