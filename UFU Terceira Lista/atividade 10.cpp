#include <stdio.h>
#include <conio.h>
#include <locale.h>

	 int main(){
	 	int a, n=0;
	 	setlocale(LC_ALL,"portuguese");
	 	printf("Os 50 primeiros números pares:\n ");
	 	while (a<50){
	 		n=n+2;
	 		a++;
	 		printf("%d\t", n);
		 }
		 
		 return 0;
		 getch();
	 }
