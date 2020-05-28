#include<stdio.h>
int main()
{
    int a[100],i,n,fbig,sbig,temp;
    printf("How many data : ");
    scanf("%d",&n);
    printf("Enter array elements : \n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }



    fbig=a[0];
    sbig=a[1];
    if(sbig>fbig)
    {
        temp=sbig;
        sbig=fbig;
        fbig=temp;
    }

    for(i=2; i<n; i++)
    {
        if(a[i]>=fbig)
        {
            sbig=fbig;
            fbig=a[i];
        }
       else if(a[i]>=sbig)
        {
            sbig=a[i];
        }
    }



    printf("The first big is %d and the second big is %d",fbig,sbig);
}
