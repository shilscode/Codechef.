
#include <stdio.h>

int main() {
	int x,y,n;
	scanf("%d",&n);


	
	
	for(int i=0;i<n;i++){
	    
	    
	scanf("%d %d",&x,&y);
	   
	   if (x>y){
	        printf("%d\n",x-y);
	    }
	    else if (x==y){
	       printf("0\n");	        
	    }
	   else if (x<y){
	       printf("0\n");	        
	    }	        
	    
	  
	}	
	

return 0;
}


