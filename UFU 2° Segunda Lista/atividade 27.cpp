#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		int i;
		setlocale(LC_ALL,"portuguese");
		printf("Coloque a idade de um nadador: ");
		scanf("%i", &i);
		if((i<=7)&&(i>=5)){ printf("Infantil A");}
		if((i>=8)&&(i<=10)){ printf("Infantil B");}
		if((i>=11)&&(i<=13)){ printf("Juvenil A");}
		if((i>=14)&&(i<=17)){ printf("Juvenil B");}
		if(i>=18){ printf("Sênior");}
		getch();
		return 0;
	}
