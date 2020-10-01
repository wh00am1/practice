#include<stdio.h>
int main()
{
    int  number,factor,times;

    while(scanf("%d",&number)!=EOF)
    {   
        if(number==1)
            printf("%d\n",1);

        else    
        for(factor=2;factor<=number;factor++)
        {
            times=0;
            while(number%factor==0)
            {
                number/=factor;
                times++;
            }

            if(number==1)
            {
                if(times>1)
                    printf("%d^%d\n",factor,times);
                else if(times==1)
                    printf("%d\n",factor);
            }    
            else 
            {
                if(times>1)
                    printf("%d^%d * ",factor,times);
                else if(times==1)
                    printf("%d * ",factor);
            }    
        }    
    }
    return 0;
}