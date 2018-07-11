#include <stdio.h>
#include <conio.h>

	int main(){
		int a, b, impar, soma, i;
		printf("Adicione dois numeros: ");
		scanf("%d%d", &a,&b);
		soma=0;
		i=0;
	/*	if ((a%2==0)&&(b%2==0)){
			while(i<=b){
				soma=soma+i;
				i=i+1;
			}
		}
		printf("%d", soma);*/
		
		if ((a%2!=0)&&(b%2!=0)){
			while (i<=b||i<=a){
				impar=impar+i;
				i=i-1;
			}
		}
		printf("%d", impar);
		
	return 0;
	getch();
	}
	
