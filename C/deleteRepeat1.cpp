#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char Letter[80];      //���ڽ���������ַ��� 
    int result[128]={0};  //�൱��һ���ſյ�ASCII���֪ 
    gets(Letter);          
    int size=strlen(Letter);
    int i,j=0;
    for(i=0;i<size;i++)      //��ѭ���ñ� 
    {                        //�ַ����е�ÿ���ַ��ڿ�ASCII����д� 
        result[Letter[i]]=1;
    }
    memset(Letter,'\0',80);  //����Ϊ���ַ��� 
    for(i=0;i<128;i++)       //����ASCII���,���д���ַ��������� 
    {
        if(result[i]==1)     //ֻҪASCII����д��˹����ַ�,��д������ 
        {
            Letter[j++]=i;
        }
    }
    printf("\n%s",Letter);
    return 0;
}
