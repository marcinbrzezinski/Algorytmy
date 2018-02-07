#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
float km, mile, jardy, wynik_mile, wynik_km, wynik_jardy;
int jednostka;
int main()
{

	printf("Wybierz jednostkę (km - 1 ; mile - 2 lub jardy - 3) =\n");
	scanf("%i", &jednostka);
	
	if(jesdnostka==1)
	printf("Podaj wartość w kilometrach \n");
	scanf("%d", &km);
	wynik_mile = km \ 1.609;
	wynik_jardy = wynik_mile * 1760;
	printf("Wynik w milach wynosi: %d", wynik_mile);

	else if{ 
	wieksekundy = wieklata * 3.156e7;
	printf("Twoj wiek w sekundach wynosi: %f sekund\n", wieksekundy);
	}
	return 0;
}

