#include <stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	/**********Begin**********/
    double r=0,h=0;
    scanf("%lf %lf",&r,&h);
    double area=2*PI*r*h+2*PI*pow(r,2);
    printf("Area = %.3lf",area);
	/**********End**********/
	return 0;
} 

#include <stdio.h>
#include<math.h>
int main()
{
	/**********Begin**********/
    int i;
    int j;
    scanf("%d %d",&i,&j);
    printf("%d",ceil(i/j));//ceil()函数返回的是一个浮点数
	/**********End**********/
	return 0;
} 

#include <stdio.h>
int main()
{
	/**********Begin**********/
    long long n=0;
    scanf("%lld",&n);
    long long result=(3*n+1)%100000007;
    printf("%lld",result);	
	/**********End**********/
	return 0;
} 

#include <stdio.h>
int main()
{
	/**********Begin**********/
    long long x=1155336644;
    //scanf("%lld",&x);
    int i=0;
    int L=0;
    int cnt=1;
    printf("L=");
    while (cnt<=8){
        int j=x%10;
        L+=j*cnt;
        printf("%lld*%d+",j,cnt);
        cnt++;
        x=x/10;
    }
    printf("\n");
    printf("%d\n",cnt);
	printf("%d",L);
	/**********End**********/
	return 0;
}