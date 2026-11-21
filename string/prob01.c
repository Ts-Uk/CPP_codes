#include<stdio.h>
#include<string.h>
int main(){
    char word[] = "ApPle";
    int n = strlen(word);
    for(int i = 0 ; i < n ; i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            continue;
        }
        else {
            word[i] = word[i]  - 'A' + 'a';
        }
    }
    printf("%s" , word);

    return 0;
}