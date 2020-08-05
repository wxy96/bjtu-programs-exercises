#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char Letter[80];      //用于接收输百入字符串 
    int result[128]={0};  //相当于一度张空的ASCII码表知 
    gets(Letter);          
    int size=strlen(Letter);
    int i,j=0;
    for(i=0;i<size;i++)      //该循环好比 
    {                        //字符串中的每个字符在空ASCII码表中打勾 
        result[Letter[i]]=1;
    }
    memset(Letter,'\0',80);  //重置为空字符串 
    for(i=0;i<128;i++)       //检索ASCII码表,逐个写入字符数道组中 
    {
        if(result[i]==1)     //只要ASCII码表中打了勾的字符,就写入数组 
        {
            Letter[j++]=i;
        }
    }
    printf("\n%s",Letter);
    return 0;
}
