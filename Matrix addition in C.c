#include<stdio.h>
int main()
{
    int i,j;
    int A[10][10],B[10][10],C[10][10],r,c;
    printf("Enter number of rows and columns : ");
    scanf("%d %d",&r,&c);

    printf("Elements for A matix\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("A[%d][%d] = ",i,j);


            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("Elements for B matix\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("B[%d][%d] = ",i,j);


            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    printf("A = ");
    for(i=0; i<r; i++)
    {
        printf("\t");
        for(j=0; j<c; j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }



    printf("\nB = ");
    for(i=0; i<r; i++)
    {
        printf("\t");
        for(j=0; j<c; j++)
        {
            printf("%d  ",B[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            C[i][j]=A[i][j]+ B[i][j];
        }

    }
    printf("\nA + B = ");
    for(i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
        {
            printf("%d  ",C[i][j]);
        }
        printf("\n");
        printf("\t");



    }
}

