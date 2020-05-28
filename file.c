#include<stdio.h>
int main()
{
    FILE *file;
    int id,marks,num,i;
    file=fopen("student.txt","a");
    if(file==NULL)
    {
        printf("File doesn't exist.");

    }
    else
    {
        printf("File is open.");

        printf("\nEnter the number of students : ");
        scanf("%d",&num);
        for(i=1;i<=num;i++)
        {
            printf("Enter the ID of student : ");
            scanf("%d",&id);
            printf("Enter the marks of student : ");
            scanf("%d",&marks);
            fprintf(file,"\n ID Number: %d , Marks = %d \n", id, marks);
        }
        fclose(file);
    }
}
