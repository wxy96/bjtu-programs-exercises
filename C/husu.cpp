/* 题面描述
小明很喜欢学数学，并且喜欢做一些奇怪的题，这天他想知道对于给定的 N ，有多少个 M 满足“ M<=N, gcd(N,M)==1, M 是偶数”。请你编写程序帮助小明解决这个问题。

输入数据
输入数据第一行为一个正整数 T ，表示测试数据的组数。 接下来的 T 组测试数据中， 每组测试数据为一行，包含一个整数 N （1≤T≤100， 1≤N≤10000 ）。

输出数据
对于每一组输入数据，在单独的一行中输出 ”Case #id: M”, 表示第 id 组数据结果是 M ， id 从 1 开始；

样例输入
4
1
2
11
23

样例输出
Case #1: 0
Case #2: 0
Case #3: 5
Case #4: 11

Hint:
gcd(a,b)==1 表示 a 与 b 的最大公约数为 1 ，即 a 与 b 互素。
*/


#include<stdio.h>

int gcd(int a,int b){
	if(b==0)
	return a;
	else 
	return gcd(b,a%b);
}

void husu(){
	int T,N,M,F;
	int i,j;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d",&N);
		M=0;
		for(j=1;j<=N;j++){
			F=gcd(N,j);	
			if(F==1)
			  if(j%2==0)
			    M++;	
		}
		printf("Case #%d: %d\n",i+1,M);
	}
	
}

int main(){
	
	husu();
	return 0;
	
}
//
//void husu1111(){
//	int T,N;
//	int count;
//	int n=1,c=0;
//	int a[100];
//	scanf("%d",&T);
//	for(count=0;count<T;count++){
//		scanf("%d",&N);
//	    if(N==1||N%2==0){
//	    	a[count]=0;
//		}else
//		{	
//		    while(N-n){
//		        if(gcd(N,N-n)==1){
//		  	    c++;
//		        }
//		  	  n=n+2;
//	        }  
//		    a[count]=c; 
//		}
//	}
//	for(count=0;count<T;count++)
//	{
//		printf("Case #%d: %d\n",count+1,a[count]);
//	}
//}

