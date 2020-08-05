#include <stdio.h>  

int zhaoqqujian(int M,int *b,int n){
	int res=0;
	int cnt=0;
	int sum=0;
	for(int i=0;i<n;i++){
		while(cnt<n){
			if(sum<=M){
				sum=sum+b[cnt];
				cnt++;
			}else{
				break;
			}
		}
		sum=sum-b[i];
		res=res+cnt-i;
	}
	return res;
}
int main(){
	
	int t;
	int n,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
    	scanf("%d %d",&n,&k);
    	int a[n],b[n];
    	int M,c=0;
    	scanf("%d",&a[0]);
    	for(int j=1;j<n;j++){
    		scanf("%d",&a[j]);
    		if(a[j]==a[j-1]){
    			b[c]=1;
    			c++;
			}else{
				b[c]=0;
				c++;
			}
		}
		b[c]=0;
		int l=0;
		int r=n-1;
		while(l<r){
			M=(l+r)/2;
			if(zhaoqqujian(M,b,n)>=k){
				r=M;
			}else{
				l=M+1;
			}
		}
		printf("%d\n",l);
	}
}
 
