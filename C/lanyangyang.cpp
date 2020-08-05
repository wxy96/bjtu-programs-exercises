/*题面描述
看过国产动画片的同学都知道，懒羊羊是一只非常懒的羊，整天除了吃就是睡，根本没有时间做作业。
明天就是周一了，村长慢羊羊留的作业：把 n 个整数从大到小排序，它还没开始写，真是一件让羊悲伤的事呀。
但是，懒羊羊又是一只相当“机智”的羊，它发现村长年纪大了，这么多作业根本判不过来，只会检查作业的开头和结尾。
所以懒羊羊想出了一个办法：把最大的数和第一个数交换，再把最小的数与最后一个数交换，其他的数位置不变。按这种方法得到的整数数列就可以瞒过村长啦。
但是即使这样，懒羊羊也懒得去做，所以它来求助爱编程的你们啦。

输入数据
第一行为 T ，表示有 T 组数据。

接下来 T 行，每行的第一个数为一个整数 n ，表示该行随后有 n 个整数，为要进行上述操作的 n 个数（保证这 n 个数中最大的数只有一个，最小的数也只有一个， T<=50;2<=n<=10000 ）。

输出数据
对每组测试数据输出单独的一行结果，形如 ” Case #x: ans ” ，表示第 x 组的结果为 ans 。

样例输入
2
5 2 3 1 5 4
6 9 11 2 0 7 2

样例输出
Case #1: 5 3 4 2 1
Case #2: 11 9 2 2 7 0
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int T,n;
	int max=0,min=0;
	int Nmax=0,Nmin=0;
	int MID=0;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d",&n);
		int*a =(int*)malloc(sizeof(int)*(n+1));
		for(int j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		max=a[0];min=a[0];
		Nmax=0,Nmin=0;
		for(int j=1;j<n;j++){
			if(a[j]>max){
				max=a[j];
				Nmax=j;
			}
			if(a[j]<min){
				min=a[j];
				Nmin=j;
			}
		}
		if(Nmax==n-1&&Nmin==0){
			MID=a[0];a[0]=a[Nmax];a[Nmax]=MID;
		}else if(Nmin==n-1&&Nmax==0){}
		else if(Nmin==0&&Nmax!=(n-1)){
			MID=a[Nmax];a[Nmax]=a[n-1];a[n-1]=a[0];a[0]=MID;
		}else if(Nmin!=0&&Nmax==(n-1)){
			MID=a[Nmin];a[Nmin]=a[0];a[0]=a[n-1];a[n-1]=MID;
		}else{
			MID=a[0];a[0]=a[Nmax];a[Nmax]=MID;
			MID=a[n-1];a[n-1]=a[Nmin];a[Nmin]=MID;
		}
		printf("Case #%d: ",i+1);
		for(int j=0;j<n-1;j++){
		printf("%d ",a[j]);
		}
		printf("%d\n",a[n-1]);
		free(a);
	}
}
