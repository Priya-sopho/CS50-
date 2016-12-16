#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<cs50.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    bool k_success = false;
    int k=0;
    string text = "";
    
    do
     {
         if(argc !=2)
          {
              printf("You didn't submitted valid encryption key\n");
              printf("Check your input and re-run the progrmam\n");
              return 1;
          }
         else
         {
             k = atoi(argv[1]);
             k_success = true;
         }
        
     }while(!k_success);
     
    text = GetString();
    for(int i=0;text[i]!='\0';++i)
      {
          if(isalpha(text[i]))
           {
               if(islower(text[i]))
                {
                    printf("%c",((((text[i]-97)+k)%26)+97));
                }
                if(isupper(text[i]))
                {
                    printf("%c",((((text[i]-65)+k)%26)+65));
                }
           }
           else
           printf("%c",text[i]);
      }
      printf("\n");
      return 0;
      
}            