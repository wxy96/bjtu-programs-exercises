#include <stdio.h>  
#include <stdlib.h>  
int main(int argc, const char * argv[]) {  
    int t = 0;  
    scanf("%d",&t);  
    for (int i = 0; i < t; i ++) {  
        int n,m,k;  
        scanf("%d %d %d",&n,&m,&k);  
        char c[n][m];  
        for (int i = 0; i < n; i ++) {  
            scanf("%s",c[i]);  
        }  
        char a = 'a';  
        char f = 'A';  
        int step[k];  
        for (int p = 0; p < k; p ++) {  
            int sn=0,sm=0,mn=0,mm = 0;  
            for (int i = 0; i < n; i ++) {  
                for (int j = 0; j < m; j ++) {  
                    if (c[i][j] == a) {  
                        sn = i;  
                        sm = j;  
                    }  
                    if (c[i][j] == f) {  
                        mn = i;  
                        mm = j;  
                    }  
                }  
            }  
            step[p] = abs(sn - mn) + abs(sm - mm);  
            a++;  
            f++;  
        }  
        int min = step[0];  
        int index = 0;  
        for (int i = 1; i < k; i ++) {  
            if (min > step[i]) {  
                min = step[i];  
                index = i;  
            }  
        }  
        printf("%c\n",'a'+index);  
    }  
    return 0;  
}
