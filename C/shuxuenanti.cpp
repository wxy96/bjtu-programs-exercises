#include<stdio.h>

int main(){
	
	int t;
	int n;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		int z=0;
		for(int j=1;j<=n;j++){
			int m=1;
			for(int k=1;k<=j;k++){
				m=m*k;
			}
			z=z+m;
		}
		printf("%d\n",z%1000000007);
	}
}
