#include<stdio.h>  
 int arm(int z)    
{    
int rem,sum,ini;
sum=0;        
ini=z;    
while(z>0)    
{    
rem=z%10;    
sum=sum+(rem*rem*rem);    
z=z/10;    
}    
if(ini==sum)    
printf("Armstrong");    
else    
printf("Not armstrong");    
return 0;  
} 