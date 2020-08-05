#include<stdio.h>

int main(){
	int T;
	int n;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d",&n);
		int a[n+2];
		long long ai[n+2];
		long long sum[n+2];
		a[0]=0,sum[0]=0;
		for(int j=1;j<=n;j++){
			scanf("%d",&a[j]);
			sum[j]=sum[j-1]+a[j];
			ai[j]=ai[j-1]+a[j]*(j+1);
		}
		int q;
		scanf("%d",&q);
		long long res[q+1];
		for(int j=0;j<q;j++){
			int left,right;
			scanf("%d %d",&left,&right);
			res[j]=ai[right]-ai[left-1]-(sum[right]-sum[left-1])*left;
		}
		printf("Case #%d: \n",i+1);
		for(int j=0;j<q;j++){
			printf("%lld\n",res[j]);
		}
	}
}
