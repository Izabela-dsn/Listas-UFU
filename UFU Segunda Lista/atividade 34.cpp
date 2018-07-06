#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"portuguese");
		float n, f;
		printf("Adicione o número de faltas e a nota, respectivamente: ");
		scanf("%f%f", &f,&n);
		if (f<=20){
			if((n>=9.0)&&(n<=10.0)){
				printf("A");
			}
			else if((n>=7.5)&&(n<=8.9)){
				printf("B");
			}
			if ((n>=5.0)&&(n<=7.4)){
				printf("C");
			}
			else if((n>=4.0)&&(n<=4.9)){
				printf("D");
			}
			if((n>=0.0)&&(n<=3.9)){
				printf("E");
			}	
		}
		else {
			if((n>=9.0)&&(n<10.0))
			printf("B");
			else if((n>=7.5)&&(n<=8.9))
			printf("C");
			if ((n>=5.0)&&(n<=7.4))
			printf("D");
			else if((n>=4.0)&&(n<=4.9))
			printf("E");
			if((n>=0)&&(n<=3.9))
			printf("E");
		}
		getch();
		return 0;
	}
