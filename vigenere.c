#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

char caesar (char a, int b);

int main(int argc, string argv[])
{
    bool k_success = false;
    string k_text="";
    string u_text="";
    int k_len =0;
    int u_len =0;
    int i=0, j=0;
    
    
    do
    {
        if(argc !=2)
        {
            printf("Wrong encryption key");
            printf("\nWe are ending. Recheck and Rerun your program\n");
            return 1;
        }
        else if(argv[1])
        {
            k_len = strlen(argv[1]);
            for(i=0;i<k_len;++i)
            {
                if(!isalpha(argv[1][i]))
                 {
                     printf("Your input contains illegal characters\n");
                     return 1;
                 }
            else
                {
                     k_success = true;
                     k_text = argv[1];
                }
            }    
        }
    }while(!k_success);
        int k_int[k_len];
        u_text = GetString();
        u_len = strlen(u_text);
        for(i=0;i<k_len;++i)
        {
            if(isupper(k_text[i]))
            k_int[i] = k_text[i]-65;
            else
            k_int[i] = k_text[i]-97;
        }
        for(i=0,j=0;i<u_len;++i,++j)
        {
            if(j==k_len)
            j=0;
            if(isalpha(u_text[i]))
            printf("%c",caesar(u_text[i],k_int[j]));
            
            else
            {
                printf("%c",u_text[i]);
                j--;
            }
        }    
        printf("\n");
        return 0;
            
}

char caesar( char a, int b)
 {
     if(isupper(a))
     
       return ((((a-65)+b)%26)+65);
     
     else 
     
         return ((((a-97)+b)%26)+97);
     
 }
