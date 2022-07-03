

#include <stdio.h>

int main() {
    int  x,y,n,t;
    
    scanf("%d",&t);
    
    
    
	for (int i =0;i<t;i++){
	        scanf("%d%d%d",&n,&x,&y);
	        int u = y*2+x;
	    
	    if ( n >u || n==u){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	    
	    
	    
	    
	}
	return 0;
}

