#include<stdio.h>
int main()
{
    int *p,n,i,sum=0;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter elements of the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    printf("Sum = %d",sum);
free(p);




}
