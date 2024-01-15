#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXLEN 9

int getrand(){
  int r = rand()%9 + 1;
  return r;
}

int main(){
  srand(time(NULL));
  int array[MAXLEN];
  int i = 0;
  int j = 0;
  int z = 0;
  //int t = 0;
  while(i < MAXLEN){
    array[i] = getrand();
    puts("first randomize");
    array[z] = array[i];
    //    z++;
    printf("array[%d] is now %d\n", z, array[z]); 
    for(j = 0;j < i;j++){
      while(array[j] == array[i]){
	printf("\tMatch at i = %d and j = %d with #. %d\n", i,j, array[i]);
	puts("second randomize");
	array[i] = getrand();
	printf("\tarray[%d] is now %d\n", i, array[i]);
      }
      z++;
    }
    //printf("array[%d] is now %d\n", i, array[i]);
    i++;
    } 
  return 0;
}
