#include<stdio.h>
#include<string.h>
int main(){
  char c[10000];
  scanf("%s",c);
  int len = strlen(c);
  for(int i=0;i<len/2;++i){
    char tmp = c[i];
    c[i] = c[len-i-1];
    c[len-i-1] = tmp;
  }
  printf("%s",c);
}