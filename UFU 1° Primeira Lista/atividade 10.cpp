#include <stdio.h>
#include <conio.h>

 int main(){
    	float K, M;
	 printf("coloque o valor de uma velocidade a km/h: ");
	 scanf("%f", &K);
	  M = K/ 3.6;
     printf("valor em m/s: %.2f", M);
    
     getch();
    return 0;
}
