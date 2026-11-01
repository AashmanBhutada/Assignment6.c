#include <stdio.h>
int factorial(int n){
      int Factorial=1;
      for(int i=1; i<=n; i++){
      Factorial = Factorial*i;
      }
      return Factorial;
      }
int main(){
      int n;
      printf("Enter n: ");
      scanf("%d",&n);
      printf("Factorial= %d\n", factorial(n));
      return 0;
      }
