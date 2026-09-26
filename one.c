#include<stdio.h>

int bignumber(int a , int b){


  if(a>b){
   return a ;
      
  }
  else{
    return b ;
    

    
  }

  
}
int main(){
  int a, b;

  printf("give the first number: ");
  scanf("%d", &a);
  printf("give the second number: ");
  scanf("%d", &b);
  
  int bigger = bignumber(a,b);
  printf("%d is the bigger number ",bigger);

  return 0;




  
}