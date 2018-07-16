#include <stdio.h>

	int main(){
		int a=0;
		float s=0;
		for (a=1; a<=50; a++){
			s+=(2*a-1)/a;
		}
		printf("O valor de S= 1/1+3/2+5/3+7/4...99/50: %.3f", s);
		return 0;
	}
