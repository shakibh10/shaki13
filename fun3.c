#include<stdio.h>

int cubeNumber(int a)
{
    int result;
    result=a*a*a;
    return result;
}
int main()
{
    int n1;
    printf("Enter any number: ");
    scanf("%d",&n1);

    int result = cubeNumber(n1);

    printf("The cube number is : %d",result);

    getch();
}
