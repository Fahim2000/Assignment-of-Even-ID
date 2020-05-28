#include <stdio.h>
#include <string.h>
struct Student
{
    char name[100];
    int roll;
    float chem_marks, math_marks, phy_marks,percentage;

};
int main()
{
    int i;
    struct Student s[5];

    printf("Enter details of 5 students: \n");

    for(i=0; i<5; i++)
    {
        printf("\n\nStudent %d : \n", i+1);
        printf("Enter student's name: ");
        scanf("%s",s[i].name);
        printf("Enter student's roll number: ");
        scanf("%d",&s[i].roll);
        printf("Enter the marks of Physics: ");
        scanf("%f",&s[i].phy_marks);
        printf("Enter the marks of Chemistry: ");
        scanf("%f",&s[i].chem_marks);
        printf("Enter the marks of Mathematics: ");
        scanf("%f",&s[i].math_marks);
        float percentage = (s[i].phy_marks + s[i].math_marks + s[i].chem_marks) / 300.0 * 100;
        printf("\npercentage of student %d : %.2f\n",i+1,percentage);
    }


}
