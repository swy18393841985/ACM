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