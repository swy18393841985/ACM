#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int find_huiwen(char*test_word);
int main()
{
    char test_word[1000]={0};
    int cnt=0;
    int j=0;
    while(scanf("%s",test_word)!=EOF){
        int i=0;
        int l=strlen(test_word);
        for(i=0;i<l;i++){
            if(test_word[i]>='A'&&test_word[i]<='Z'){
                test_word[i]=test_word[i]+32;
            }
        }
        int flag=find_huiwen(test_word);    
        if(flag==0){
            printf("yes");
        }else{
            printf("no");
        }
    printf("\n");
    }
    return 0;
}
int find_huiwen(char *test_word)
{
    char *a=test_word;
    char *tail=&test_word[strlen(test_word)-1];
    int i;
    int flag=0;
    for (i=0;i<=strlen(test_word)/2;i++){
        if (*a!=*tail){
            flag=1;
            break;
        }else{
            a++;tail--;
        }
    }
    return flag;
}
