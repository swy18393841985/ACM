#include<stdio.h>
void division(int *a,int *b,int*c);
int main()
{
    int a,b;
    int c=0;
    scanf("%d%d",&a,&b);
    division(&a,&b,&c);
    printf("%d",c);
    return 0;
}
void division(int *a,int *b,int *c)
{
    *c=(*a)/(*b);
}