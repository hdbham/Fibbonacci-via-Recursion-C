
#include <stdio.h>
//function declarations
unsigned long fibo(unsigned long n);
int main(){
  unsigned long n, f;
  
  //input
  printf("Enter an integer: ");
  scanf("%lu", &n);
  
  //prints result of integer
  f = fibo(n);
  printf("Fibonacci Number F(%lu) = %lu\n",n,f);
  //input
  printf("Enter a second integer: ");
  scanf("%lu", &n); //stores input  
  
  //prints result of second integer
  f = fibo(n);
  printf("Fibonacci Number F(%lu) = %lu\n",n,f);
  //gets previous by subtracting n, recursively
  n=n-1; //doesnt recount n
  printf("Preceding Fibonacci Numbers:\n");
  for (int i = n; 0 < n; n--){
  f = fibo(n); //loops n through fibo function for each
  printf("%lu ", f);
  }
}
unsigned long fibo(unsigned long n){
  unsigned long i, a, b, f;
  if(n < 2)
    return n; //  because f(1)=1
  else{
    a = 0, b = 1, f = 0; //a seed 0, b seed 1,
    for(i = 2; i <= n; i++){ //start at index 2
      f = a + b;
      a = b; //let a represent last value, b is current
      b = f; //b is equal to (a+b)
    }
  }
  return f; //returns f to main
}
