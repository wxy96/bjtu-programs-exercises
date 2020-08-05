#include<stdio.h>

int main(){
	int T;
	long int a,b,c;
	int i;
	int max;
	int MAX[1000];
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d %d %d",&a,&b,&c);
		max=a*b;
		if(max<b*c)
		max=b*c;
		if(max<c*a)
		max=c*a;
		MAX[i]=max;
	}
	for(i=0;i<T;i++){
		printf("Case #%d: %d\n",i+1,MAX[i]);
		
	}
}
