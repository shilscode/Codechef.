#include <stdio.h>

int main(void) {
	int  a,b,x,c,d,t;
	scanf("%d",&t);
	for (int i = 0;  i<t;  i++){
	    scanf("%d%d%d",&a,&b,&x);
	    c= b-a;
	    d=c/x;
	    printf("%d\n",d);
	    
	}
	return 0;
}