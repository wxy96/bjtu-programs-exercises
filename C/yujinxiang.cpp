#include<stdio.h> 

int main(){
	
	int t;
	int n,m;
	char flower[100][100];
	int count1[26];
	int count2[26];
	char letter[26];
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d",&n,&m);
		for(int j=0;j<n;j++){
			scanf("%s",&flower[j]);	
		}
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				count1[flower[j][k]-'A']++;
			}
		}
		int k=0;
		for(int j=0;j<26;j++){
			if(count1[j]!=0){
				count2[k]=count1[j];
				letter[k]='A'+j;
				k++;
			}
		}
		int temp1;
		char temp2;
    	for (int j=0; j<k; j++){
        	for (int z=0; z<k-1-j; z++) {
          	  if (count2[z]<count2[z+1]) {
          	  		temp1 = count2[z];
        			count2[z] = count2[z+1];
          	      	count2[z+1] = temp1;
           	     	temp2 = letter[z];
        			letter[z] = letter[z+1];
          	      	letter[z+1] = temp2;
         	   }
        	}
		}
		printf("%d\n",k);
		for(int j=0;j<k;j++){
			printf("%d %c\n",count2[j],letter[j]);
		}
		for(int i=0;i<26;i++){
			count1[i]=0;
		}
	}
}
