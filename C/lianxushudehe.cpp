#include <stdio.h>
#include <math.h>

int main(){
	int T;
	long long n;
	int i,j;
	int a,b;
	int M=0;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%lld",&n);
		for(j=2;j<=(int)sqrt(2*n);j++){
			b=(2*n/j+j-1)/2;
			a=b+1-j;
			if((a+b)*(b-a+1)/2==n){
				M++;
			}
		}
		printf("Case #%d: %d\n",i+1,M);
		M=0;
	}
} 
 
