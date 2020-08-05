#include <stdio.h>  

static long palindrome(int n){
	int x=18,j=9,k=2;
	int left;
	int h=1;
	int result;
	if(n<=9){
		return n;
	}else if(n<=18){
		return (n-9)*11;
	}else{
		while(true){
		if(k>0&&k%2==0){
			j=j*10;
			printf("j=%d\n",j);
		}
		k++;
		if(x+j>=n){
			break;
		}
		x=x+j;
		printf("1.x=%d\n",x);
	}
	printf("2.x=%d\n",x);
	printf("k=%d\n",k);
	printf("n=%d\n",n);
	n=n-x;
	for(int i=0;i<(k-1)/2;i++){
		h=h*10;
	}
	printf("h=%d\n",h);
	left=h+n-1;
	printf("left=%d\n",left);
	result=left;
	if(k%2!=0){
		left=left/10;
	}
	printf("left=%d\n",left);
	while(left!=0){
		result = result*10+left%10;
		left=left/10;
	}
	return result;
	}
}

int main(){
	
	int t;
	int n;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		long result=palindrome(n);
		printf("%ld\n",result);
	
	}
}
