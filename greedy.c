#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    float given_amount=0;
    int cents = 0;
    int q_count =0;
    int d_count =0;
    int n_count =0;
    int leftover =0;
    int coin_count =0;
    
    do
    {
        printf("O hai! How much change you owed?");
        given_amount = GetFloat();
        if(given_amount<=0)
        {
            printf("How much change you owed?");
            given_amount = GetFloat();
        }
    }while(given_amount<=0);
    
    cents = (int)round(given_amount*100);
    
    q_count = cents/25;
    leftover = cents%25;
    d_count = leftover/10;
    leftover = leftover%10;
    n_count = leftover/5;
    leftover = leftover%5;
    
    coin_count = q_count+d_count+n_count+leftover;
    
    printf("%d\n",coin_count);
    return 0;
}