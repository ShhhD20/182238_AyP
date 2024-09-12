#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){
	int a, b, r;
	int res;
	float div, ans;
	srand(time(NULL));
	
	r = rand() % 5;
	r += 1;
	
	while(r < 5){
		a = rand();
		b = rand();
		
		switch(r){
			case 1: //suma
				res = a+b;
				printf("%d + %d = %d\n", a, b, res);
				break;
			case 2: //resta
				res = a-b;
				printf("%d - %d = %d\n", a, b, res);
				break;
			case 3: //multiplicación
				res = a*b;
				printf("%d * %d = %d\n", a, b, res);
				break;
			case 4: //división 
				div = a; 
				ans = div/b;
				printf("%d / %d = %0.3f\n", a, b, ans);
				break;
		}
		r = rand() % 5;
		r += 1;
	}
	
	return 0;
}
