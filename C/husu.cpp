#include<stdio.h>

int gcd(int a,int b){
	if(b==0)
	return a;
	else 
	return gcd(b,a%b);
}

void husu(){
	int T,N,M,F;
	int i,j;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d",&N);
		M=0;
		for(j=1;j<=N;j++){
			F=gcd(N,j);	
			if(F==1)
			  if(j%2==0)
			    M++;	
		}
		printf("Case #%d: %d\n",i+1,M);
	}
	
}

int main(){
	
	husu();
	return 0;
	
}
//
//void husu1111(){
//	int T,N;
//	int count;
//	int n=1,c=0;
//	int a[100];
//	scanf("%d",&T);
//	for(count=0;count<T;count++){
//		scanf("%d",&N);
//	    if(N==1||N%2==0){
//	    	a[count]=0;
//		}else
//		{	
//		    while(N-n){
//		        if(gcd(N,N-n)==1){
//		  	    c++;
//		        }
//		  	  n=n+2;
//	        }  
//		    a[count]=c; 
//		}
//	}
//	for(count=0;count<T;count++)
//	{
//		printf("Case #%d: %d\n",count+1,a[count]);
//	}
//}

