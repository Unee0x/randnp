#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXLEN 9

int getrand(){

  int i = 0;

  int buf[MAXLEN] = {'\0'};
  int r = rand()%8 + 0;

  printf("r is %d\n", r);
  return r;
}

int main(){
  srand(time(NULL));
  int array[MAXLEN];
  int i = 0;
  static int j = 0;
  while(i < MAXLEN){
    array[i] = getrand();

    for(j = 0; j < MAXLEN;j++){
      if(array[i] == array[j])
	printf("Match at i = %d and j = %d with #. %d\n", i,j, array[i]);
      
    }
    printf("At index %d is %d\n", i, array[i]);
    i++;
    } 
  return 0;
}
