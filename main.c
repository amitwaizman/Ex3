#include<stdio.h>
#include "ex3.h"
int main()
{
char word[1024];

char txt[30];




int i=-1;
do{
    i++;
 scanf("%c", &word[i]);
}while ((word[i]!=' ')&&(word[i]!='\t')&&(word[i]!='\n'));


 int j=-1;
do{
    j++;
 scanf("%c", &txt[j]);
}while ((txt[j]!='~'));


  

GemString(txt, word);

AtbashString(txt, word);
 AnagramString(txt,word);
return 0;
}