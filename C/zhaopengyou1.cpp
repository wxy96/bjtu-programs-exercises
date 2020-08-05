#include<stdio.h>
#include<math.h>

int main(){
	
	int t;
	int n,m,k;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d %d",&n,&m,&k);
		getchar();
		char map[n][m];
		int frequency[k];
		char letter[k];
		int flag=0;
		int count=0;
		char temp;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%c",&map[i][j]);
			}
			getchar();
		}
		getchar();
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(map[i][j]>='A'&&map[i][j]<='Z'){
					temp=map[i][j];
					for(int ii=0;ii<n;ii++){
						for(int jj=0;jj<m;jj++){
							if(map[ii][jj]==temp+32){
								frequency[count]=fabs(i-ii)+fabs(j-jj);
								letter[count]=map[ii][jj];
								count++;
							}
						}	
					}
				map[i][j]=0;	
				}
			}
		}
		int fmin=0;count=0;
		fmin=frequency[0];
		for(int i=1;i<k;i++){
			if(fmin>frequency[i]){
				fmin=frequency[i];
				flag=i;
			}else if(fmin==frequency[i]&&letter[i]<letter[flag]){
				fmin=frequency[i];
				flag=i;
			}
		}
		printf("%c\n",letter[flag]);
	}
}
