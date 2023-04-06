#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//#include <malloc.h>



//переводит в систему счисления из 10 в sis
int dec(int num,int sis)
{
    
    int bin = 0, k = 1;
    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= sis;
    }

    return bin;
}



int main ()
{
  
    int a=dec(423,2);
    
    printf("%d",a);
    
    

    return 0;
}


