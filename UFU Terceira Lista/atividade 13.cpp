#include <stdio.h>
#include <conio.h>
#include <locale.h>

	 int main (){
	 	setlocale(LC_ALL,"portuguese");
	 	int N,n;
	 	printf("um número: ");
	 	scanf("%d", &N);
	 	for(n=0; n<=N/2; n++){
	 		if((N>=0)&&(N%2==0))
	 			printf("\t%i", n*2);
	 }
		 return 0;
		 getch();
	 }
	 
