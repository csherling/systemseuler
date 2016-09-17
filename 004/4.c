#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int i;
  int j;
  int curnum = 0;
  int max = 0;
  for(i = 999; i >= 100; i--){
    for(j = 999; j >= 100; j--){
      curnum = i*j;
      if(curnum > 100000){

	if(curnum / 100000 == curnum % 10){

	  if(curnum / 10000 % 10 == curnum % 100 / 10){

	    if(curnum / 1000 % 10 == curnum % 1000 / 100){
	      if(curnum > max){
		max = curnum;
	      }
	    }
	  }
	}
      }
    } 
  }

  printf("result: %d \n", max);
  return 0;

}
