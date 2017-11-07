#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float a, b, c, x;
	printf("Podaj a =\n");
	scanf("%f", &a);
	printf("Podaj b =\n");
        scanf("%f", &b);
	printf("Podaj c =\n");
        scanf("%f", &c);
	if(a==0)
	printf("Równanie sprzeczne \n");
	else 
	{x=((c-b)/a); /*ax+b=c mozna zapisac jako ax=c-b -> x=c-b/a*/
	printf("x wynosi %f\n", x);
	}
	return 0;
}
