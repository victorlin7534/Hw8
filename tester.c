#include <stdio.h>
#include <stdlib.h>
#include "sieve.h"

int main(){
  int i;
  for(i=100;i<10000;i+=100)
    printf("the %dth prime number: %d\n",i,sieve(i));
  return 0;
}
