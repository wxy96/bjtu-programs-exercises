/*题面描述
为祝贺新一批的研究生入学，队长让大家为新人命题训练其程序设计能力。有人问队长能不能黑，队长说可以黑但是不能黑那啥。大家很失望 2333 ，于是 calfcamel 决定出一道 2333 的题目。

给你一个小于 60 位的整数 p ，求大于 p 的最小的数 p1 ，使得 p1 中包含数 2333 。

输入数据
输入数据的第一行为一个正整数 T ，表示有 T 组数据。随后的 T 行中每行包括一个小于 60 位的整数 p （ T <= 50 ， 1 <= p <10^60 ，即 10 的 60 次方）。

输出数据
对每组输入数据单独输出一行结果，第 x 行结果形如 ”Case #x: a“ ，其中 x 为组号，从 1 开始， a 为对应的结果。

样例输入
2
100
1000000000000

样例输出
Case #1: 2333
Case #2: 1000000002333
*/


#include<stdio.h>
#include<string.h>
char n[80];
int a[60];
void cleanA(){
	for(int j=0;j<60;j++)
		a[j]=0;
}
void cleanN(){
	for(int j=0;j<80;j++)
		n[j]=0;
}

int main(){
	int T,F; 
	int L=0;
	int i,j,sum;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%s",n);
		L=strlen(n);
		for(j=0;j<L;j++){
			a[j]=n[j]-'0';
		}
		if(L<4){
			printf("Case #%d: %d\n",i+1,2333);
		}else if(L==4){
			sum=a[0]*1000+a[1]*100+a[2]*10+a[3];
			if(sum<2333){
				printf("Case #%d: %d\n",i+1,2333);
			}else{
				printf("Case #%d: %d\n",i+1,12333);
			}
		}else{
			F=0;
			while(F==0){
				a[L-1]=a[L-1]+1;
				if(a[L-1]==10){
					a[L-1]=0;
					for(j=L-2;j>=0;j--){
						a[j]=a[j]+1;
						if(a[j]==10){
							a[j]=0;
						}else break;
					}
				}
				if(a[0]==0){
					L=L+1;
					for(j=L-1;j>0;j--){
					a[j]=a[j-1];
					}
					a[0]=1;	
				}
				for(j=0;j<L-3;j++){
					if(a[j]==2)
						if(a[j+1]==3)
							if(a[j+2]==3)
								if(a[j+3]==3)
									F=1;
				}
				if(F==1){
					for(j=0;j<L;j++){
						n[j]=a[j]+'0';
					}
					printf("Case #%d: %s\n",i+1,n);
				}
			}
		}
	}
	cleanA();
	cleanN();
}
