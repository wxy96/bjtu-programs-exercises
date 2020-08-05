/*
题面描述

小 A 是一个卡片收藏的爱好者，他有一个非常大的正方形卡箱，卡箱中有 n × n 个格子，每个格子中都放着一张卡片，为了方便寻找卡片，小 A 给每个卡片标上一个整数值。卡箱中卡片的值满足从左向右非递减，从上到下非递减。

现给你一个卡片的值，你能快速的找到卡片的位置吗？

输入数据

第一行有一个整数 t (1 ≤ t ≤ 10) ，表示有 t 组数据。

对于每组数据：

第一行有一个整数 n (1 ≤ n ≤ 1000) ，表示正方形卡箱的边长；

接下来有 n 行，每行有 n 个整数 aij (1 ≤ aij ≤ 109) ，表示正方形卡箱中卡片的值。

接下来一行为有一个整数 q (1 ≤ q ≤ 104) ，表示有 q 个询问。对于每个询问：

第一行有一个整数 x (1 ≤ x ≤ 109) 。

保证 ∑ n2 ≤ 2 × 106, ∑ q ≤ 2 × 104 。

输出数据

对个每个询问，如果卡箱中有这张卡片，输出它的位置 x y ，反之输出 -1 。

如果有多个卡片值相同，请输出 x 最小的，如果还有多个相同的，请输出 y 最大的。

样例输入

2
3
1 3 5
2 4 7
6 8 9
3
1
7
10
2
1 1
1 1
1
1

样例输出

1 1
2 3
-1
1 2
*/


#include<stdio.h>
int a[1000][1000];
int X,Y=0;

int BinarySearch(int x,int n){
	for(int i=0;i<n;i++){
		int L=0,H=n-1,mid;
		while(L<=H){
			mid=L+(H-L)/2;
			if(a[i][mid]==x){
				X=i+1;Y=mid+1;
				while(a[i][Y]==x){
					Y++;
				}
				return 0;
			}
			if(a[i][mid]<x){
				L=mid+1;
			}else{
				H=mid-1;
			}
		}
	}
	return -1;
}
int main(){
	
	int t;
	int n;
	int q;
	int x;
	scanf("%d",&t);
	for(int k=0;k<t;k++){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		scanf("%d",&q);
		for(int i=0;i<q;i++){
			scanf("%d",&x);
			int flag=BinarySearch(x,n);
			if(flag==0){
				printf("%d %d\n",X,Y);
			}else{
				printf("%d\n",flag);
			}
		
		}
	}
}
