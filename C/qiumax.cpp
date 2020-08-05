/*题面描述
给你三个数 a, b, c ，求 a* b, b * c, c * a 三个数中的最大值

输入数据
第一行有一个整数 T ，代表接下来有 T 组数据，每一组数据占单独的一行，包括三个整数 a, b 和 c 。

输出数据
对于每组输入数据，在单独的行中输出 一行形如 "Case #id: a b c" 的结果 ，保证最大值不超过 32 位整数范围。

样例输入
3
1 1 1
1 2 2
3 1 2

样例输出
Case #1: 1
Case #2: 4
Case #3: 6
*/

#include<stdio.h>

int main(){
	int T;
	long int a,b,c;
	int i;
	int max;
	int MAX[1000];
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d %d %d",&a,&b,&c);
		max=a*b;
		if(max<b*c)
		max=b*c;
		if(max<c*a)
		max=c*a;
		MAX[i]=max;
	}
	for(i=0;i<T;i++){
		printf("Case #%d: %d\n",i+1,MAX[i]);
		
	}
}
