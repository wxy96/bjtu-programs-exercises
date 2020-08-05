#include <stdio.h>  

int a[12]={0,9,18,108,198,1098,1998,10998,19998,109998,1009998}

void right(int left,int n){
	for(int i=0;i<n;i++){
		printf("%d",left);
		left=left/10;
	}
	printf("\n");
}
int main(){
	
	int t;
	int n;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&n);
	
	}
}
