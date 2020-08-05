/*
题面描述

“晚饭吃什么？” Lazy_sheep 的女朋友问到。

“咱这不才吃完午饭嘛！” Lazy_sheep 看着餐厅的菜谱，无奈的回答。

作为一个世纪难题，“晚饭吃什么”一直困扰着 Lazy_sheep 。

已知餐厅菜谱上的每一道菜前都写有一个正整数作为菜品编号，而他女朋友能记起前 n 顿饭吃的是哪些菜。如果今天晚饭和前 n 顿饭中某一顿吃的菜相同的话，她就会不开心。

现在 Lazy_sheep 随口说出了某个编号 w ，请你帮忙判断会不会到导致女朋友不开心。

输入数据

第一行有一个整数 t (1 ≤ t ≤ 100) ，表示有 t 组数据。

对于每组数据：

第一行有一个正整数 w (1 ≤ w ≤ 50) ，表示 Lazy_sheep 说出的菜品编号；

第二行有一个正整数 n (1 ≤ n ≤ 20) ；

第三行有 n 个不同的正整数 ai (1 ≤ i ≤ n,1 ≤ ai ≤ 50) ，表示前 n 顿饭吃的菜品编号。

输出数据

对于每组数据：

如果 w 是前 n 顿饭吃过的菜品编号，输出一行“ unhappy ”，否则输出“ happy ”。

样例输入

2
1
3
1 2 3
5
5
1 8 7 4 6

样例输出

unhappy
happy
*/

#include <stdio.h>  

int main(){
	
	int t;
	int w,n;
    scanf("%d",&t);
    for(int j=0;j<t;j++){
    	scanf("%d",&w);
    	scanf("%d",&n);
    	int a[n];
    	int flag=0;
    	for(int i=0;i<n;i++){
    		scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			if(w==a[i]){
    			printf("unhappy\n");
    			flag=1;
    			break;
			}
		}
		if(flag==0)printf("happy\n");
	}
    
}
