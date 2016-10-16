#include <stdio.h>
#include<math.h>

int main(void) 
{
   long int ip1=1234,ip2=3412,digit,count=0,num=0;
    while(ip1!=0)
    {
        digit=ip1%10;
        count++;
        ip1=ip1/10;
        num=ip1+(digit*pow(10,(count-1)));
        if(num==ip2)
            printf("\n Cyclic number");
        else if(num!=ip2)
        continue;
        else
         printf("\n not cyclic");
    }
    return 0;
}
