/*
题面描述

小刘所在的学校本学期共开设了 60 门课，并且每位同学会选修 5 门不同的课，小刘想知道是否存在一个 3 门课的集合，使得小刘所在班级有至少 p% （ p 为不超过 100 的非负整数） 的同学选修了这三门课。

输入数据

第一行有一个整数 t (1 ≤ t ≤ 20) ，表示有 t 组数据。

对于每组数据：

第一行有两个整数 n, p (2 ≤ n ≤ 100000,50 ≤ p ≤ 100) ， n 表示小明班级的人数；

接下来的 n 行，每行有 5 个整数 ai (0 ≤ ai ≤ 59) 表示该同学选修的课程号。

输出数据

对于每组数据，如果存在至少 p% 的同学选修相同的 3 门课程，输出一行“ yes ”，否则输出“ no ”。

样例输入

1
5 80
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

样例输出

yes
*/

#include<stdio.h>
int s[5];
int A[61][61][61];

void SelectionSort(int *arr, int size)
{
    int i, j, k, tmp;
    for (i = 0; i < size - 1; i++) {
        k = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[k]) {
                k = j;
            }
        }
        tmp = arr[k];
        arr[k] = arr[i];
        arr[i] = tmp;
    }
}

int main(){
	
	int t;
	int n,p;
	int flag=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d",&n,&p);
		for(int j=0;j<n;j++){
			scanf("%d %d %d %d %d",&s[0],&s[1],
			&s[2],&s[3],&s[4]);
			SelectionSort(s,5);
			for(int k=0;k<3;k++){
				for(int kk=k+1;kk<4;kk++){
					for(int kkk=kk+1;kkk<5;kkk++){
						A[s[k]][s[kk]][s[kkk]]++;
						if(A[s[k]][s[kk]][s[kkk]]*100>=n*p){
							flag=1;
							break;
						}
					}
					if(flag==1) break;
				}
				if(flag==1) break;
			}
		}
		if(flag==1){
			printf("yes\n");
			flag=0;
		}else{
			printf("no\n");
		}
	}
}
