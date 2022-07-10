#include <stdio.h>

int main(void) {
	int  t;
	scanf("%d",&t);
	for (int i =0 ; i<t;i++){
	    int x,n,d,c,u;
	    scanf("%d%d",&n,&x);
	    c=n-x;
	    
	    if (n<=x ){
	    printf("0\n");}
	    else {
	        d=c/4;
	        u=c%4;
	        if(u==0) {
	          printf("%d\n",d);  
	        }
	        else{
	          printf("%d\n",d+1);  
	        }
	    
	    }
	    
	    
	}
	return 0;
}

