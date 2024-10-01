#include<stdio.h>
int product(int *a,int *b);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",product(&a,&b));
    return 0;
}
int product(int *a,int *b)
{
    int c;
    c=(*a)*(*b);
    return c;
}