#include <stdio.h>
#include "opt.h"
int modulus();
int addition();
int multiplication();
int factorial();
float division();
int power();
int subtraction();
int main()
{
int rep; 
int x,y, res;
res=0;
printf("choose");
printf("1.Additon\n 2.Subtraction\n 3.Multplication \n 4.Division \n 5.Modulus\n 6.Power\n 7.Factorial \n 8. Armstrong\n");
scanf("%d", &rep);
switch (rep) {
    case 1:
      printf("Enter numbers to perform addition on");
      scanf("%d %d",&x,&y);     
      res = addition(x,y); 
      printf("%d",res);
      break;
    case 2:
      printf("");
      scanf("%d %d",&x,&y);
      res=subtraction(x,y); 
      printf("%d",res);
      break;
    case 3:
      printf("Enter numbers to perform multiplication on");
      scanf("%d %d",&x,&y);
      res = multiplication(x,y); 
      printf("%d",res);
      break;
    case 4:
      printf("Enter numbers to perform division on");
      scanf("%d %d",&x,&y);
      res = division(x,y);   
      printf("%d",res);
      break;
    case 5: 
        printf("Enter numbers to perform modulus on");
        scanf("%d %d",&x,&y);
        res= modulus(x,y);  
        printf("%d",res);
        break;  
    case 6: 
        printf("\nenter bumber \n");
        scanf("%d",&x);
        printf("enter power");
        scanf("%d",&y);      
        res= power(x,y);
        printf("%d",res);
        break;  
    case 7: 
        printf("\n enter a number");
        scanf("%d",&x);
        res = factorial(x); 
        printf("%d",res);
        break;
    case 8:
        printf("\n enter a number");
        scanf("%d",&x);
        arm(x); 
        break;      
    default:
        break;
  return 0;
}