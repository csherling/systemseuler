#include <stdio.h>
#include <stdlib.h>

int fibonacci(int pos){
  if(pos <= 0){
    return 1;
  }
  else{
    return fibonacci(pos - 1) + fibonacci(pos - 2);
  }
}

long sumOfEven(int max){
  int i;
  long sum = 0;
  for(i = 1; fibonacci(i) < max; i += 3){
    sum += fibonacci(i);
  }
  printf("result of max of %d: %ld\n", max, sum); 
  return sum;
}

int main(){
  sumOfEven(12);//10
  sumOfEven(35);//44
  sumOfEven(145);//188
  sumOfEven(4000000);//10
  return 0;
}
