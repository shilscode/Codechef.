/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
	int a ,i, b,n;
	scanf("%d",&n);
// 	scanf("%d%d",&a,&b);

	
	
	for(i=0;i<n;i++){
	    
	    
	    scanf("%d %d",&a,&b);
	    if (a>b){
	        printf("%d\n",b);
	    }
	   else if (a<b){
	       printf("%d\n",a);	        
	    }
	   else{
	       printf("%d\n",a);	        
	    }
	  
	
	
}
return 0;
}

