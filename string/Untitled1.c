// #include<stdio.h>
// #include <string.h>
// void uppercase(char word[], int n){
//     for (int i = 0; i < n ; i++){
//         char ch = word[i];
//         if (ch >= 'A' && ch <= 'Z'){
//             continue;
//         }
//         else{
//             word[i] = ch - 'a'+'A';
//         }

        
//     }


// }
// int main (){
// //      char a = 'a' ;
// //     printf("%c \n",a);
// //     printf("%d \n",(int)a);
// //     char str[5]= {'a', 'b','c', '\0'};
// //     printf("%s \n",str);
// //     char str2[]="hello world";
// //     printf("%s \n",str2);
// //     printf("%d \n",strlen(str2));
// //     int len = strlen(str);
// //     printf("%d \n",len);
// //    char word[100];
// //    scanf("%s",&word);
// //     printf("%s",word);
// //     char sentence[100];
// //     fgets(sentence,100,stdin);
// //     printf("%s",sentence);
//     char word[]="ApPle";
//     int n = strlen(word);
//     uppercase(word,n);
//     printf("%s",word);

// return 0;}
#include<stdio.h>
int main(){
char ch = 'f';
int position = ch - 'a';
printf("%d \n",position); 
char arra[58]= {'a','b','c','d','e','\0'};
printf("%c \n",arra[0]);
printf("%s \n",arra);
char string[10000] = "rakib hasan";
printf("%s",string);
return 0;
}