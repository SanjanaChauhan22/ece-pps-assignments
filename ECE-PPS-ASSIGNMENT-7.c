#include <stdio.h>
struct Student 
{
    int rollNo;
    char name[50];
    int sub1, sub2, sub3;
    int total;
    float percentage;
};

int main()
{
    int n, i;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++)
    {
        printf("\nEnter the roll number, name and marks of 3 subjects %d: ", i+1);
        scanf("%d %s %d %d %d", &s[i].rollNo, s[i].name, &s[i].sub1, &s[i].sub2, &s[i].sub3);

        s[i].total = s[i].sub1 + s[i].sub2 + s[i].sub3;
        s[i].percentage = s[i].total / 3.0;
    }

    printf("\nRoll No\tName\tSubject: 1\tSubject: 2\tSubject: 3\tTotal\tPercentage\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d \t\t%d\t\t%d\t\t%d\t%.2f\n", s[i].rollNo, s[i].name, s[i].sub1, s[i].sub2, s[i].sub3, s[i].total, s[i].percentage);
    }

    return 0;
}