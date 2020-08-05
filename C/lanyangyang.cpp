#include<stdio.h>
#include<stdlib.h>

int main(){
	int T,n;
	int max=0,min=0;
	int Nmax=0,Nmin=0;
	int MID=0;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d",&n);
		int*a =(int*)malloc(sizeof(int)*(n+1));
		for(int j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		max=a[0];min=a[0];
		Nmax=0,Nmin=0;
		for(int j=1;j<n;j++){
			if(a[j]>max){
				max=a[j];
				Nmax=j;
			}
			if(a[j]<min){
				min=a[j];
				Nmin=j;
			}
		}
		if(Nmax==n-1&&Nmin==0){
			MID=a[0];a[0]=a[Nmax];a[Nmax]=MID;
		}else if(Nmin==n-1&&Nmax==0){}
		else if(Nmin==0&&Nmax!=(n-1)){
			MID=a[Nmax];a[Nmax]=a[n-1];a[n-1]=a[0];a[0]=MID;
		}else if(Nmin!=0&&Nmax==(n-1)){
			MID=a[Nmin];a[Nmin]=a[0];a[0]=a[n-1];a[n-1]=MID;
		}else{
			MID=a[0];a[0]=a[Nmax];a[Nmax]=MID;
			MID=a[n-1];a[n-1]=a[Nmin];a[Nmin]=MID;
		}
		printf("Case #%d: ",i+1);
		for(int j=0;j<n-1;j++){
		printf("%d ",a[j]);
		}
		printf("%d\n",a[n-1]);
		free(a);
	}
}
