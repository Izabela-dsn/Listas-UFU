#include <conio.h>
#include <stdio.h>
	 int main (){
	 	int num, soma;
	 	printf("digite um numero: ");
	 	scanf("%i", &num);
	 	soma=0;
	 	while(num>0)
		  {{
		  
		    soma+=num%10;
		    num/=10;}
		  
			printf("A soma dos algarismos dos numeros e: %d\n",soma);
			}
			
		if(num<0){
			printf("numero invalido.");
		}

		getch ();
		return 0;
		}
