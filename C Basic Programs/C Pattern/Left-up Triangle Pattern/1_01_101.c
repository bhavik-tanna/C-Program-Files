/*
1 
0 1
1 0 1 
0 1 0 1
1 0 1 0 1
*/

#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter The Number of Column: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        for (j = i; j >= 1; j--)
        {
            printf("%d ", j % 2);
        }
        printf("\n");
    }
    return 0;
}