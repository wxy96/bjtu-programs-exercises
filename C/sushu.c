#include <stdio.h>

int main(){
	
	int x;
	scanf("%d",&x);
	
	int i;
	int isPrime = 1;
	for(i=2;i<x;i++){
		if(x%i==0){
			printf("%d\t��������\n",x);
		}
	}
	printf("������\n");
	return 0;
} 
