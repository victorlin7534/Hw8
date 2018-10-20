#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "sieve.h"

int sieve(int n){
  int i,j;

  int size = (int)(n*log(n*1.0)*1.2);
  char list[size];
  for(i=3;i<size;i+=2)
  	list[i] = 1;

  for(i=3;i<size;i+=2){
  	if(list[i]){
  		for(j=i;j<size;j+=i)
	  		list[j]= 0;
	  	n--;
  	}
  	if(n==1)
		break;
  }

  return i;
}
