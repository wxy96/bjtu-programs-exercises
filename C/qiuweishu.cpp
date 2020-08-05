#include<stdio.h>
#include<math.h>

int main(){
	int t,i;
	int j=0;
	int a,k;
	int W[1000];
	long int x;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&a,&k);
		x=pow(a,k);
		do{
			x/=10;
			j++;
		}while(x>0);
		W[i]=j;
		j=0;
	}
	for(i=0;i<t;i++){
		printf("%d\n",W[i]);
	}
	
	
}
