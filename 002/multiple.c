#include <stdio.h>
#include <stdlib.h>

int sumOfMults(int max){
  int i;
  int sum = 0;
  for(i = 3; i < max; i++){
    if(i % 3 == 0 || i % 5 == 0){
      sum += i;
    }
  }

  printf("Result of a maximum of %d: %d\n", max, sum);
}

int main(){
  sumOfMults(10);//23
  sumOfMults(15);//45
  sumOfMults(20);//78
  sumOfMults(1000);

  return 0;
}

