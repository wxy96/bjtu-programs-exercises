#include<stdio.h>

int main(){
	int T,n,L,M,H;
	int i,j;
	int l=0,m=0,h=0;
	int l1[1000],m1[1000],h1[1000];
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%d %d %d",&L,&M,&H);
			if(H>=60){
			l++,m++,h++;
			}
			if(H<60&&M>=60){
			l++,m++;
		    }
			if(H<60&&M<60&&L>=60){
			l++;
			}
		}
		l1[i]=l;m1[i]=m;h1[i]=h;
		l=0;m=0;h=0;
	}
	for(i=0;i<T;i++){
			printf("Case #%d: %d %d %d\n",i+1,l1[i],m1[i],h1[i]);
	}

}
