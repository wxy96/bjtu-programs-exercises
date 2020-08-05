#include <stdio.h> 
#include <math.h> 

int q=0;
int w;
int Left(int n){
	int x=18,j=9,k=2;
	int h=1;
	int left;
	while(1){
		if(k>0&&k%2==0){
			j=j*10;
		}
		k++;
		if(x+j>=n){
			break;
		}
		x=x+j;
	}
	n=n-x;
	for(int i=0;i<(k-1)/2;i++){
		h=h*10;
	}
	left=h+n-1;
	if(k%2!=0){
		q=1;
	}
	w=k;
	return left;
}
int main(){
	
	int t;
	int n;
	int r=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		if(n<=9){
			printf("%d\n",n);
		}else if(n<=18){
			printf("%d\n",(n-9)*11);
		}else{
			int left=Left(n);
			r=left;
			printf("left=%d\n",left);
			if(q==1){
				r=r/10;
				for(int i=0;i<(w/2);i++){
					printf("%d",r%10);
					r=r/10;
				} 
			}else{
				for(int i=0;i<(w/2);i++){
					printf("%d",r%10);
					r=r/10;
				} 
			}
			printf("\n");
		}
	q=0;
	}
}
