#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    fgets(ch,100,stdin);
    ch[strcspn(ch, "\n")] = '\0';
    printf("%s",ch);
}