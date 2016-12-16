#include<stdio.h>
#include<cs50.h>

int GetBottles(int min)
{
    int bottles;
    bottles = 12 * min;
    return bottles;
}

int main(void)
{
    printf("Minutes:");
    int minutes = GetInt();
    printf("Bottles:%d\n",GetBottles(minutes));
}