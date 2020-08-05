#include <stdio.h>
#include <string.h>
int main(){
char Letter[128]={0};
char deleter[128]={0};
gets(Letter);
int k=0;
for(int i=0; i<strlen(Letter); i++) 
for(int j=0; j<strlen(Letter); j++)
if(i!=j&&Letter[i]==Letter[j]) break;
else if(j==strlen(Letter)-1)deleter[k++]=Letter[i];
//对deleter排序度代专码属
puts(deleter);
return 0;
}
