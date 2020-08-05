/*题面描述
小明报名参加了趣味运动会，运动会游戏规则如下：在一个环形跑道上，等距离放置着 N 个小球，小球按照顺时针方向从起点开始依次编号为 1 到 N ，在最短时间内取走放在跑道上尽可能多小球的选手获胜。举办方要求每个选手只能按照顺时针方向，跳过 M-1 个号码取后走下一个小球。如当 N=5 、 M=3 时，小明能够取走所有的小球，取走的顺序依次为 1->4->2->5->3 。当 N=6 、 M=2 时，小明只能取走 3 个小球 1->3->5 。小明想知道在一场比赛中他最多能取走多少小球，当然，小明是知道怎么做的，但是他忙着补作业，所以这个简单的问题就交 (shuai guo) 给你了。

输入数据
输入数据的第一行为一个整数 T ，表示有 T 组测试样例。每组样例为单独的一行，包括两个整数 N 和 M 。

输出数据
对每一组输入数据，输出一行结果 ”Case #id: M” ，表示第 id 组数据的结果是 M ， id 从 1 开始。

样例输入
3
5 3
6 2
10 6

样例输出
Case #1: 5
Case #2: 3
Case #3: 5
*/


#include<stdio.h> 

int gcd(int a, int b){
	
    if (b == 0)
        return a;
    else
       return gcd(b, a%b);
}

int main(){
	int T,N,M;
	int count,max;
	scanf("%d",&T);
	int a[1000];
	for(count=0;count<T;count++){
		scanf("%d %d",&N,&M);
		max = N<M?M:N;
		a[count]=gcd(N, M);
		if(a[count] == 1)
		a[count]=N;
		else a[count]=max/a[count];
	}
	for(count=0;count<T;count++){
		printf("Case #%d: %d\n",count+1,a[count]);
	}
}

