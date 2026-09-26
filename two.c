#include<stdio.h>

int smallnumber(int a , int b){


  if(a<b){
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
  
  int smaller = smallnumber(a,b);
  printf("%d is the smaller number ",smaller);

  return 0;




  
}