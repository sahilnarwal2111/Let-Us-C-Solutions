#include<stdio.h>
int main()
{
    int c, d;
    int a;
    printf("Enter the value of c\n");
    scanf("%d",&c);
    printf("Enter the value of d\n");
    scanf("%d",&d);
    a = c;
    c = (c + d) - c;
    d = (a + d) - d;
    printf("The value of c is %d\n", c);
    printf("The value of d is %d\n", d);
    return 0;
}