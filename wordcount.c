#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,c=0;
    printf("Enter a string : ");
    gets(str);
    for(i=0;str[i]!='\0' ; i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
    }
    printf("Words = %d",c+1);
}
