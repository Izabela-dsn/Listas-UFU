#include <conio.h>
#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		int a, i=0, d;// a -> � o n�mero que o usuario ir� colocar d->� o n�mero que vai dividir//
		printf("Digite um n�mero inteiro para verificar se ele � primo: ");
		scanf("%d", &a);
		for (d=1;d<=a;d++){
			if(a%d==0){
			i++;
		}
		}
		if (i==2) printf("\nO n�mero %d � primo", a);
		else printf("\nO n�mero %d n�o � primo.", a);
			
		
		getch();
		return 0;
	}
