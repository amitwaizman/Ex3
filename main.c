#include<stdio.h>

int main(int argc)
{
char txt[1024];

char word[30];
char c;
int i=0;
do{
 scanf("%c", &word[i]);
 i++;
}while (c!=' '&& c!='\t'&&c!='\n');
 int j=0;
do{
 scanf("%c", &word[j]);
 j++;
}while (c!=' '&& c!='\t'&&c!='\n');
  

GemString(txt, word);
AtbashString(txt, word);
AnagramString(txt,word);

}
