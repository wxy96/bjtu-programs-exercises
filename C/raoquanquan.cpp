#include<stdio.h> 

int gcd(int a, int b){
	
    if (b == 0)
        return a;
    else
       return gcd(b, a%b);
}

int main(){
	int T,N,M;
	int count,max;
	scanf("%d",&T);
	int a[1000];
	for(count=0;count<T;count++){
		scanf("%d %d",&N,&M);
		max = N<M?M:N;
		a[count]=gcd(N, M);
		if(a[count] == 1)
		a[count]=N;
		else a[count]=max/a[count];
	}
	for(count=0;count<T;count++){
		printf("Case #%d: %d\n",count+1,a[count]);
	}
}

