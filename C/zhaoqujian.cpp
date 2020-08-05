/*
题面描述
给定n个数 a1,…,an，高老师想了解al,…,ar中有多少对相邻元素值相同。高老师把这个数目定义为区间[l,r]的价值，用v[l,r]表示。例如 1,1,1,2,2 这五个数所组成的区间的价值为3。

现在高老师想知道在所有的v[l,r] (1≤l≤r≤n)中，第k小的值是多少。但高老师要和女朋友出去玩，于是他把这个问题甩给了你，请你帮他解决一下。

输入数据
第一行有一个整数t(1≤t≤30)，表示有t组数据。

对于每组数据：

第一行有两个整数n,k (1≤n≤2000,1≤k≤n(n+1)/2)；

第二行有n个整数a1,…,an (1≤ai≤109)。

输出数据
对于每组数据：

输出一个整数，表示第 k小的值。

样例输入
2
4 7
1 1 2 3
3 5
100 100 100

样例输出
0
1
*/




#include <stdio.h>  

int zhaoqqujian(int M,int *b,int n){
	int res=0;
	int cnt=0;
	int sum=0;
	for(int i=0;i<n;i++){
		while(cnt<n){
			if(sum<=M){
				sum=sum+b[cnt];
				cnt++;
			}else{
				break;
			}
		}
		sum=sum-b[i];
		res=res+cnt-i;
	}
	return res;
}
int main(){
	
	int t;
	int n,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
    	scanf("%d %d",&n,&k);
    	int a[n],b[n];
    	int M,c=0;
    	scanf("%d",&a[0]);
    	for(int j=1;j<n;j++){
    		scanf("%d",&a[j]);
    		if(a[j]==a[j-1]){
    			b[c]=1;
    			c++;
			}else{
				b[c]=0;
				c++;
			}
		}
		b[c]=0;
		int l=0;
		int r=n-1;
		while(l<r){
			M=(l+r)/2;
			if(zhaoqqujian(M,b,n)>=k){
				r=M;
			}else{
				l=M+1;
			}
		}
		printf("%d\n",l);
	}
}
 
