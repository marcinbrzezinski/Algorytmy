#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int wieklata;
double wieksekundy;
int main()
{

	printf("Podaj wiek w latach =\n");
	scanf("%i", &wieklata);
	
	if(wieklata==0)
	printf("Wiek nie moze być równy 0! \n");
	else{ 
	wieksekundy = wieklata * 3.156e7;
	printf("Twoj wiek w sekundach wynosi: %f sekund\n", wieksekundy);
	}
	return 0;
}
