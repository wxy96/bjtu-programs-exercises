/* 题面描述
Infinity 最近参加了 HG 大学推理社举办的一场寻宝比赛。比赛中，来自各个学校的同学将会获得一些密码题目，题目的答案指向学校的某些地点，解出这些题目将会获得一些分数，前往这些地点会推动剧情的发展。现在 Infinity 看到了一道题目：

AAGGACCGGCCC

“这一定是 RNA 序列！”高中生物不错的 Infinity 喊道。于是他马上写出了如下的序列：

UUCCUGGCCGGG

“题目的这些序列表示 mRNA 密码子，把每个字母， A 变成 U ， U 变成 A ， C 变成 G ， G 变成 C ，就得到 tRNA 上的对应的反密码子，这些密码子对应的氨基酸都有各自的缩写字母，让我百度一下。” Infinity 激动的解释道。

“哦！答案是 FLAG ，我们快去国旗杆吧！”

Infinity 在国旗杆得到了更多的密码，现在他有 tRNA 对应的氨基酸表示的缩写字母表，他只需要你把他给你的 mRNA 序列变成 tRNA 序列（不考虑启动子或终止子。如果你不知道什么是启动子和终止子，请忽略这句话）。

输入数据
输入第一行是一个整数 n (1 <= n <= 100) ，表示 Infinity 给你的 mRNA 条数。

接下来 n 行，每行有一个字符串 s (|s| <= 300) ，表示 Infinity 的 mRNA 。

输出数据
对每组测试数据，在单独的行中输出形如 ” Case #x: ans” 的结果，表示第 x 条序列对应的 tRNA 序列为 ans ，详见样例。

样例输入
1
AAGGACCGGCCC

样例输出
Case #1: UUCCUGGCCGGG
*/



#include<stdio.h>
char RNA[300];
void clean(){
	for(int k=0;k<300;k++)
		RNA[k]=0;
}
int main(){
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",RNA);
		for(j=0;j<300;j++){
			if(RNA[j]=='A'){
				RNA[j]=RNA[j]+20;
				continue;
			}
			if(RNA[j]=='U'){
				RNA[j]=RNA[j]-20;
				continue;
			}
			if(RNA[j]=='C'){
				RNA[j]=RNA[j]+4;
				continue;
			}
			if(RNA[j]=='G'){
				RNA[j]=RNA[j]-4;
				continue;
			}
		}
		printf("Case #%d: %s\n",i+1,RNA);
		clean();
	}
} 
