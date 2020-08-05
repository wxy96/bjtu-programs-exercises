/*
题面描述

春天到了，校园里开满了郁金香。 Infinity 经过花坛的时候，常常会停下来数郁金香玩。

Infinity 会分别统计不同颜色的花出现的次数，并把它们按照出现次数从多到少排序。

这次 Infinity 来到了一个很大的花坛前，和往常一样继续数郁金香。

不料，他数到一半时突然忘记数到哪了。 Infinity 不想从头开始数了，你能帮帮他吗？

输入数据

第一行有一个整数 t (1 ≤ t ≤ 100) ，表示有 t 组数据。

对于每组数据：

第一行有两个整数 n, m (1 ≤ n, m ≤ 100) ，表示花坛的长和宽；

接下来 n 行，每行有一个长度为 m 且由大写字母组成的的字符串，表示对应位置出现的花的种类。其中，相同的字母表示相同的花，不同的字母表示不同的花。

输出数据

对于每组数据：

第一行输出一个整数 k ，表示花坛中一共有 k 种不同的花。

接下来 k 行，每行输出一个整数 x 和一个字符 c ，表示出现了 x 个种类为 c 的花。

你需要按花出现的次数从大到小的顺序输出，如果多种花数量相同，请按花的种类从小到大输出。

样例输入

1
3 3
ABC
BBC
CCC

样例输出

3
5 C
3 B
1 A
*/


#include<stdio.h> 

int main(){
	
	int t;
	int n,m;
	char flower[100][100];
	int count1[26];
	int count2[26];
	char letter[26];
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d",&n,&m);
		for(int j=0;j<n;j++){
			scanf("%s",&flower[j]);	
		}
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				count1[flower[j][k]-'A']++;
			}
		}
		int k=0;
		for(int j=0;j<26;j++){
			if(count1[j]!=0){
				count2[k]=count1[j];
				letter[k]='A'+j;
				k++;
			}
		}
		int temp1;
		char temp2;
    	for (int j=0; j<k; j++){
        	for (int z=0; z<k-1-j; z++) {
          	  if (count2[z]<count2[z+1]) {
          	  		temp1 = count2[z];
        			count2[z] = count2[z+1];
          	      	count2[z+1] = temp1;
           	     	temp2 = letter[z];
        			letter[z] = letter[z+1];
          	      	letter[z+1] = temp2;
         	   }
        	}
		}
		printf("%d\n",k);
		for(int j=0;j<k;j++){
			printf("%d %c\n",count2[j],letter[j]);
		}
		for(int i=0;i<26;i++){
			count1[i]=0;
		}
	}
}
