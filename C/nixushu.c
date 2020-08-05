#include <stdio.h>

int main(){
	int x;
	scanf("%d",&x);
//	x=700;
	int digit;
	int ret = 0;
	
	while(x>0){
		digit=x%10; //对X取余数
		ret = ret*10 + digit;
		printf("x=%d,digit=%d,ret=%d",x,digit,ret);
		x/=10;  //把最后一位剥离 
		
	}
	
	 printf("%d",ret);
	 return 0;
}

