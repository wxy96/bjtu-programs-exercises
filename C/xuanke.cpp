#include<stdio.h>
int s[5];
int A[61][61][61];

void SelectionSort(int *arr, int size)
{
    int i, j, k, tmp;
    for (i = 0; i < size - 1; i++) {
        k = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[k]) {
                k = j;
            }
        }
        tmp = arr[k];
        arr[k] = arr[i];
        arr[i] = tmp;
    }
}

int main(){
	
	int t;
	int n,p;
	int flag=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d",&n,&p);
		for(int j=0;j<n;j++){
			scanf("%d %d %d %d %d",&s[0],&s[1],
			&s[2],&s[3],&s[4]);
			SelectionSort(s,5);
			for(int k=0;k<3;k++){
				for(int kk=k+1;kk<4;kk++){
					for(int kkk=kk+1;kkk<5;kkk++){
						A[s[k]][s[kk]][s[kkk]]++;
						if(A[s[k]][s[kk]][s[kkk]]*100>=n*p){
							flag=1;
							break;
						}
					}
					if(flag==1) break;
				}
				if(flag==1) break;
			}
		}
		if(flag==1){
			printf("yes\n");
			flag=0;
		}else{
			printf("no\n");
		}
	}
}
