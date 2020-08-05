/*题面描述
对于一个给定的正整数 n ，请你找出一共有多少种方式使 n 表示为若干个连续正整数的和，要求至少包括两个正整数。如 n=15 时，可以有 3 种方式：（ 1+2+3+4+5 ），（ 4+5+6 ），（ 7+8 ）。

输入数据
输入数据第一行为一个正整数 T ，表示测试数据的组数。 随后的 T 行中，每行包括一组测试数据，为一个整数 n（1≤T≤1000,n≤10^9）。

输出数据
对每一组输入数据，输出一行结果 ”Case #id: M” ，表示第 id 组数据的结果是 M ， id 从 1 开始。

样例输入
2
3
15

样例输出
Case #1: 1
Case #2: 3
*/

#include <stdio.h>
#include <math.h>

int main(){
	int T;
	long long n;
	int i,j;
	int a,b;
	int M=0;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%lld",&n);
		for(j=2;j<=(int)sqrt(2*n);j++){
			b=(2*n/j+j-1)/2;
			a=b+1-j;
			if((a+b)*(b-a+1)/2==n){
				M++;
			}
		}
		printf("Case #%d: %d\n",i+1,M);
		M=0;
	}
} 
 
