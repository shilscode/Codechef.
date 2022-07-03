#include <stdio.h>

int main() {
    int  x,y,z,t;
    
    scanf("%d",&t);
    
    
    
	for (int i =0;i<t;i++){
	        scanf("%d%d%d",&x,&y,&z);
	        int n = x%y + x/y;
	        
	    
	    if (y>x){
	        printf("%d\n",z);
	    }
	    else{
	        int k = z*n;
	        printf("%d\n",k);
	        
	    }
	    
}
}