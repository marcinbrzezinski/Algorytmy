/*== SORTOWANIE BĄBELKOWE v1.0 == */
/*== Autor: Marcin Brzeziński  == */ 
#include <stdio.h>
 
int main()
{
  int ciag[100], n, c, d, swap;
 
  printf("Podaj ilosc elementow wybranego ciagu: \n");
  scanf("%d", &n);
 
  printf("Podaj %d elementow ciagu\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &ciag[c]);
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (ciag[d] > ciag[d+1]) /* Aby zmienic sposob sortowania nalezy uzyc: < */
      {
        swap       = ciag[d];
        ciag[d]   = ciag[d+1];
        ciag[d+1] = swap;
      }
    }
  }
 
  printf("Oto ciag posortowany rosnaco:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", ciag[c]);
 
  return 0;
}
