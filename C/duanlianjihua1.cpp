/*
题面描述

老顽童是一个热爱运动的人，每天都有小顽童来和他一起锻炼。为了让锻炼更有成效，他想要制定一份锻炼计划，让第 n 天的训练量要等于第 n 个正回文数 ( 第 1 个正回文数是 1) 。

老顽童已经打印好了计划表，但是他的计划表中有一些日子被遗漏了，他又不想重新计算，你可以帮他解决这个问题吗？

如果一个数的各位数字反向排列后仍然等于其本身，则把这样的数称为回文数 (palindrome number) ，如 12321 是回文数， 1232 不是回文数。

输入数据

第一行有一个整数 t (1 ≤ t ≤ 100000) ，表示有 t 组数据。

每组数据只有一行，为一个整数 n (1 ≤ n ≤ 400000) ，表示第 n 天。

输出数据

对于每组数据，输出一个整数，表示对应的训练量。

样例输入

5
1
2
3
12
23

样例输出

1
2
3
33
141
*/

#include <stdio.h> 
#include <math.h> 

int q=0;
int w;
int Left(int n){
	int x=18,j=9,k=2;
	int h=1;
	int left;
	while(1){
		if(k>0&&k%2==0){
			j=j*10;
		}
		k++;
		if(x+j>=n){
			break;
		}
		x=x+j;
	}
	n=n-x;
	for(int i=0;i<(k-1)/2;i++){
		h=h*10;
	}
	left=h+n-1;
	if(k%2!=0){
		q=1;
	}
	w=k;
	return left;
}
int main(){
	
	int t;
	int n;
	int r=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		if(n<=9){
			printf("%d\n",n);
		}else if(n<=18){
			printf("%d\n",(n-9)*11);
		}else{
			int left=Left(n);
			r=left;
			printf("left=%d\n",left);
			if(q==1){
				r=r/10;
				for(int i=0;i<(w/2);i++){
					printf("%d",r%10);
					r=r/10;
				} 
			}else{
				for(int i=0;i<(w/2);i++){
					printf("%d",r%10);
					r=r/10;
				} 
			}
			printf("\n");
		}
	q=0;
	}
}
