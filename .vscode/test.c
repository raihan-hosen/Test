#include <stdio.h>
int main()
{

    int marks[3];
    printf("Enter the marks of Physics: ");
    scanf("%d", &marks[0]);

    printf("Enter the marks of Chemistry: ");
    scanf("%d", &marks[1]);

    printf("Enter the marks of Mathematics: ");
    scanf("%d", &marks[2]);

    int n;
    printf("Enter the subject code: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("The number of Physics is %d", marks[0]);
    }
    else if (n == 1)
    {
        printf("The number of Chemistry is %d", marks[1]);
    }
    else if (n == 2)
    {
        printf("The number of Mathematics is %d", marks[2]);
    }

    return 0;
}
