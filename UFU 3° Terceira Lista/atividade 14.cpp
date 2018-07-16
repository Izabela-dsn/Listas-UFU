#include <stdio.h>
#include <conio.h>


	int main( ){
		
		int N;
		printf("Digite um numero:");
		scanf("%d", &N);
		while (N>=0){
			if((N>=0)&&(N%2==0)){
	 			printf("\t%i", N);
				N=N-2;	
			}
			
		}
		getch();
		return 0;
	}
