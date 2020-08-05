#include <stdio.h>
int Sub(int a, int b)
{return (a-b);}
main()
{int  x, y, result = 0; 
scanf("%d,%d", &x,&y ); 
result = Sub(x,y ) ; 
printf("result = %d\n",result);
}

