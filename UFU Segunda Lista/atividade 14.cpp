#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main (){
		setlocale(LC_ALL,"portuguese");
		float tl, as, ef, T;
		printf("Coloque as notas do Trabalho de Laborat�rio, Avalia��o Semestral e Exame Final respectivamente: ");
		scanf("%f%f%f", &tl,&as,&ef);
		T = tl + as + ef /3;
			
			if( T <= 2.9  ) 
			printf("Aluno Reprovado: %.2f", T);
			
			if(T>=4.9){
				printf("Aluno Aprovado: %.2f", T);
			}
		
			if (4.9 < T >= 3 ){ // Essa parte n�o est� correta, pois n�o est� funcionando. //
			printf("Aluno de Recupera��o: %.2f", T);
			}
				
		getch();
		return 0;
	}
	
		// while( 0 != tl <= 2 && 0!= as <= 3 && 0 != ef <= 5){ //
