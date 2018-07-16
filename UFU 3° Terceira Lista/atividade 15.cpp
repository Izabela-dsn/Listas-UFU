#include <stdio.h>
#include <conio.h>

	int main(){
		
	 	int N, n=1;
	 	printf("Coloque um numero impar: ");
	 	scanf("%d", &N);
	 	if (N%2!=0 && N>=0){
			while(n<=N){
				printf("\t%d", n);
				n=n+2;
			}
	 			
				
	 }
	 getch();
	 return 0;
	}
