#include <stdio.h>

int main(){
	
	int x;
	scanf("%d",&x);
	
	int i;
	int isPrime = 1;
	for(i=2;i<x;i++){
		if(x%i==0){
			printf("%d\t不是素数\n",x);
		}
	}
	printf("是素数\n");
	return 0;
} 
