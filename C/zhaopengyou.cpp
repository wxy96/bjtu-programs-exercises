/*题面描述

找呀 找呀 找朋友
找到一个好朋友
敬个礼 握握手
你是我的好朋友

春天到了，大家都找自己的好朋友出去玩耍，然而大家都不甘示弱，要比比谁最先能找到自己的好朋友。

给出一个 n × m 的地图，上面有 k 对好朋友，分别用 'a','A','b','B', … …表示。其中大写字母 'A' 和小写字母 'a' 是一对好朋友。

小写字母在单位时间内可以向上、向下、向左或向右移动一格（可以穿过障碍物），大写字母不能移动。

请问最快找到好朋友（对应的大写字母）的小写字母是谁？

输入数据

第一行有一个整数 t (1 ≤ t ≤ 100) ，表示有 t 组数据。

对于每组数据：

第一行有三个正整数 n , m, k (1 ≤ n,m ≤ 100, 1 ≤ k ≤ 26) ，表示地图的行数、列数和好朋友的对数；

接下来有 n 行，每行有一个长为 m 的字符串，表示地图。 '.' 表示什么都没有，对应的大写字母和小写字母表示一对好朋友。

输出数据

输出 t 行，每行一个小写字母，表示最快找到好朋友的小写字母。

如果有多个小写字母同时找到好朋友，则输出字典序最小的小写字母。

样例输入

3
2 5 2
aBA..
....b
3 4 3
a..A
b.B.
c.C.
4 4 2
b..A
.B..
....
...a

样例输出

a
b
b
*/


#include<stdio.h>
#include<math.h>

int main(){
	
	int t;
	int n,m,k;
	int count=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d %d",&n,&m,&k);
		getchar();
		char map[n][m];
		int frequency[k];
		char letter[k];
		int flag=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%c",&map[i][j]);
			}
			getchar();
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(map[i][j]>='a'&&map[i][j]<='z'){
					for(int ii=0;ii<=i;ii++){
						for(int jj=0;jj<m;jj++){
							if(map[ii][jj]==map[i][j]-32){
								frequency[count]=fabs(i-ii)+fabs(j-jj);
								letter[count]=map[i][j];
								flag=1;
								count++;
							}
						}	
					}
					if(flag==0){
						for(int iii=i;iii<n;iii++){
							for(int jjj=0;jjj<m;jjj++){
								if(map[iii][jjj]==map[i][j]-32){
									frequency[count]=fabs(iii-i)+fabs(jjj-j);
									letter[count]=map[i][j];
									count++;
								}
							}	
						}	
					}
					map[i][j]=0;
				}
			flag=0;
			}
		}
		int fmin=0;count=0;
		fmin=frequency[0];
		for(int i=1;i<k;i++){
			if(fmin>frequency[i]){
				fmin=frequency[i];
				flag=i;
			}else if(fmin==frequency[i]&&letter[i]<letter[flag]){
				fmin=frequency[i];
				flag=i;
			}
		}
		printf("%c\n",letter[flag]);
	}
}
