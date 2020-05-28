
#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int i,j,flag=0;
    printf("Enter the string 1 : ");
    gets(str1);
    printf("Enter the string 2 : ");
    gets(str2);
    for(i=0; str1[i]!='\0' ; i++);
    for(j=0; str2[j]!='\0' ; j++);
    if(i>j)
        printf("String 1 is greater than string 2");
    else if(j>i)
        printf("String 1 is smaller than string 2");
    else
    {


        for(i=0; str1[i]!='\0' ; i++)
        {


            if(str1[i]!=str2[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("Both strings are equal");
        else
            printf("Strings are not equal");
    }

}
