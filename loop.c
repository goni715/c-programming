#include <stdio.h>

int main(){
  //printf("Outsbook\n"); 
  // int x; 
  // scanf("%d",&x); 
  // int monthlyIncome = x*365; 
  // printf("%d\n", monthlyIncome);

  int D;
  int Q;
  int R;

  scanf("%d %d %d", &D, &Q, &R);

  int minus = D-R;
  int result = minus/Q;


  printf("%d\n", result);
  
  return 0;
}