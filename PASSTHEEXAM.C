
#include <stdio.h>

int main() {
	int  x;
	scanf("%d",&x);
	for (int i =0 ; i<x;i++){
	    int a,b,d,c;
	    scanf("%d%d%d",&a,&b,&c);
	    d  = a+b+c;
	    
	    
	        if (a>=10 && a<=100) {
	            if(b>=10 && b<=100){
	                if(c>=10 && c<=100){
	                    if (d>=100){
	            
	                              printf("PASS\n");
	                        
	                                              }
	                     else{
	                           printf("FAIL\n");}
	                     
	                                                  }
	                else{
	                   printf("FAIL\n");}
	                
	            }
	            
	            
	            
	        else{
	             printf("FAIL\n");}  }
	    

       else{
	    printf("FAIL\n");}	      
	      

	}
	return 0;
	}