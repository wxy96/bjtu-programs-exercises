#include<stdio.h>
char RNA[300];
void clean(){
	for(int k=0;k<300;k++)
		RNA[k]=0;
}
int main(){
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",RNA);
		for(j=0;j<300;j++){
			if(RNA[j]=='A'){
				RNA[j]=RNA[j]+20;
				continue;
			}
			if(RNA[j]=='U'){
				RNA[j]=RNA[j]-20;
				continue;
			}
			if(RNA[j]=='C'){
				RNA[j]=RNA[j]+4;
				continue;
			}
			if(RNA[j]=='G'){
				RNA[j]=RNA[j]-4;
				continue;
			}
		}
		printf("Case #%d: %s\n",i+1,RNA);
		clean();
	}
} 
