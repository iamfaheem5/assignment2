#include <stdio.h>
int isleap(int year){
    if (year % 400 == 0) {
      return 1;
   }
 
   else if (year % 100 == 0) {
      return 2;
   }
   
   else if (year % 4 == 0) {
      return 1;
   }
 
   else {
      return 2;
   }




}



int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   int leap = isleap(year);

   if (leap == 1)
   {
    printf("%d is a leap year ", year);
   }
   else{

    printf("%d is not  a leap year ", year);
    

   }
   





   

   return 0;
}