#include <stdio.h>

int main(){
	
	int num = 0;
	int sum = 0;
	int count = -1;
	
	while(num!=-1){
		sum += num;
		count++;
		scanf("%d",&num);
	}
	
	printf("%f\n",1.0*sum/count);
	
	return 0;
	
}
