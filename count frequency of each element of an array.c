#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,n,f=0 ;

    printf("Enter size of the array : ");
    scanf("%d",&n);

    printf("Enter elements in array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        f=1;
        if(a[i]!=-1)
        {
            for(j=i+1; j<n; j++)

            {
                if(a[i]==a[j])
                {
                    f++;
                    a[j]=-1;
                }
            }
            b[i]=f;
        }
    }

    for(i=0; i<n; i++)
    {
        if(a[i]!=-1)
        {
            printf("frequency of %d is %d \n",a[i],b[i]);

        }
    }
}
