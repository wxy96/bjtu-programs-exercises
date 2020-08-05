#include <stdio.h>  

int main(){
	
	int t;
	int w,n;
    scanf("%d",&t);
    for(int j=0;j<t;j++){
    	scanf("%d",&w);
    	scanf("%d",&n);
    	int a[n];
    	int flag=0;
    	for(int i=0;i<n;i++){
    		scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			if(w==a[i]){
    			printf("unhappy\n");
    			flag=1;
    			break;
			}
		}
		if(flag==0)printf("happy\n");
	}
    
}
