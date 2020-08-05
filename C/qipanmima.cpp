#include<stdio.h> 
int a,b;
char plaintext[101];
int ciphertext[101];
char table[6][6]={{"ABCDE"},{"FGHIK"},{"LMNOP"},{"QRSTU"},{"VWXYZ"}};
void decrypt(int j){
		a=ciphertext[j]/10%10;
		b=ciphertext[j]%10;
		plaintext[j]=table[a-1][b-1];
}
void cleanP(){
	for(int k=0;k<100;k++)
		plaintext[k]=0;
}
void cleanC(){
	for(int k=0;k<100;k++)
		ciphertext[k]=0;
}
int main(){
	int n,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		for(int j=0;j<m;j++){
			scanf("%d",&ciphertext[j]);
			decrypt(j);
		}
		printf("Case #%d: %s\n",i+1,plaintext);
		cleanP();
		cleanC();
	}
}

