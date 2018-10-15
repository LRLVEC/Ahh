#include <stdio.h>
#include <stdlib.h>

int main()
{
  unsigned int k=0,N=1e7;
  for(int c1=0;c1<N;c1++)
    for(unsigned int t=0;t<RAND_MAX;t+=rand())
      k++;
  printf("%lf",double(k/N));
}
