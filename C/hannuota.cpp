#include <stdio.h>

int main(){
	int t;
	int n,m;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d",&n,&m);
		int a[n],b[n],count[n];
		for(int j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		b[0]=a[0];
		for(int j=1;j<n;j++){
			b[j]=((2*b[j-1])%m+(a[j])%m)%m;
		}
		count[0]=(2*a[0]-1);
		for(int j=1;j<n;j++){
			if(a[j]==1){
				count[j]=((2*b[j-1])%m+1)%m;
			}else{
				count[j]=((2*b[j-1])%m+(2*a[j])%m+count[j-1])%m;
			}
		}
		printf("%d\n",count[n-1]%m);
	}
} 
