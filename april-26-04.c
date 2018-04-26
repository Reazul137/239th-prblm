#include<stdio.h>
int main()
{
    int i, n, sum=0;

    printf("Input the number of terms : ");
    scanf("%d",&n);

    printf("The square natural upto %d terms are : ",n);

    for (i=1; i<=n; i++)
    {
        printf("%d  ", i*i);
        sum += i*i;
    }
    printf("\n The sum of square natural number upto %d terms = %d \n", n, sum);

    return 0;
}
