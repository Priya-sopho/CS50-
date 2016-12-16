#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int py_ht = 0;
     
     do
     {
         printf("Height:");
         py_ht = GetInt();
         
         if(py_ht==0)
          {
              return 0;
          }
     }while(py_ht<1||py_ht>23);
    
    for(int i=1;i<=py_ht;++i)
     {
         for(int j=0;j<=py_ht;++j)
         {
             if(i+j>=py_ht)
             printf("#");
             else
             printf("%s"," ");
         }
        printf("\n");
     }    
}