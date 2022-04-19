#include <stdio.h>

int main(){
float sy,ac;
int operation;
printf("press '1' if u want to convert square yards to acres per sec\npress '2' if u want to convert acres per sec to square yards ");
printf("\n");
scanf("%d",&operation);

 switch (operation)
 {
 case 1:
printf("Enter your value in square yards to get in acres");
printf("\n");
scanf("%f",&sy);
 ac=sy/4840;
 printf("%.f squareyards = %.2f acres",sy,ac);
     break;
 
 case 2:
 printf("Enter your value in acres per sec to get in square yards");
 printf("\n");
scanf("%f",&ac);
 sy=ac*4840;
 printf("%.f acres = %.2f square yards",ac,sy);
 default:
 
     break;
 }

 return 0 ;
}