#include<stdio.h>
int a[1000][1000];
int X,Y=0;

int BinarySearch(int x,int n){
	for(int i=0;i<n;i++){
		int L=0,H=n-1,mid;
		while(L<=H){
			mid=L+(H-L)/2;
			if(a[i][mid]==x){
				X=i+1;Y=mid+1;
				while(a[i][Y]==x){
					Y++;
				}
				return 0;
			}
			if(a[i][mid]<x){
				L=mid+1;
			}else{
				H=mid-1;
			}
		}
	}
	return -1;
}
int main(){
	
	int t;
	int n;
	int q;
	int x;
	scanf("%d",&t);
	for(int k=0;k<t;k++){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		scanf("%d",&q);
		for(int i=0;i<q;i++){
			scanf("%d",&x);
			int flag=BinarySearch(x,n);
			if(flag==0){
				printf("%d %d\n",X,Y);
			}else{
				printf("%d\n",flag);
			}
		
		}
	}
}
