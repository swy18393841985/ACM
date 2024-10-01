#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int lines=0;
    char *test[100];
    scanf("%d",&lines);
    int i=0; 
    int j=0;
    int time=0;
    for(time=0;time<=lines;time++){
        char *str=(char*)malloc(sizeof(char)*100);
        gets(str);
        test[time]=str;
    }
    for (j=0;j<=lines;j++){
        char *p=&test[j][strlen(test[j])-1];
        for (i=0;i<strlen(test[j]);i++){
            printf("%c",*p);
            p--;
        }
        printf("\n");
    }
    return 0;
}
