#include<stdio.h>
#include<string.h>
char n[80];
int a[60];
void cleanA(){
	for(int j=0;j<60;j++)
		a[j]=0;
}
void cleanN(){
	for(int j=0;j<80;j++)
		n[j]=0;
}

int main(){
	int T,F; 
	int L=0;
	int i,j,sum;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%s",n);
		L=strlen(n);
		for(j=0;j<L;j++){
			a[j]=n[j]-'0';
		}
		if(L<4){
			printf("Case #%d: %d\n",i+1,2333);
		}else if(L==4){
			sum=a[0]*1000+a[1]*100+a[2]*10+a[3];
			if(sum<2333){
				printf("Case #%d: %d\n",i+1,2333);
			}else{
				printf("Case #%d: %d\n",i+1,12333);
			}
		}else{
			F=0;
			while(F==0){
				a[L-1]=a[L-1]+1;
				if(a[L-1]==10){
					a[L-1]=0;
					for(j=L-2;j>=0;j--){
						a[j]=a[j]+1;
						if(a[j]==10){
							a[j]=0;
						}else break;
					}
				}
				if(a[0]==0){
					L=L+1;
					for(j=L-1;j>0;j--){
					a[j]=a[j-1];
					}
					a[0]=1;	
				}
				for(j=0;j<L-3;j++){
					if(a[j]==2)
						if(a[j+1]==3)
							if(a[j+2]==3)
								if(a[j+3]==3)
									F=1;
				}
				if(F==1){
					for(j=0;j<L;j++){
						n[j]=a[j]+'0';
					}
					printf("Case #%d: %s\n",i+1,n);
				}
			}
		}
	}
	cleanA();
	cleanN();
}
