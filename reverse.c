#include <stdio.h>
 
int main()
{
  int Number, R, Rev = 0;
 
  printf("\nPlease Enter any number to Reverse\n");
  scanf("%d", & Number);
 
  while (Number > 0)
   {
     R = Number %10;
     Rev = Rev *10+ R;
     Number = Number /10;
   }
 
  printf("Reverse of entered number is = %d\n", Rev);
 
  return 0;
}
