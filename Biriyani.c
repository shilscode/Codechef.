#include <stdio.h>

int main(void) {
	int t, x,y;
	scanf("%d ", &t);
	
	for(int i=1; i<=t; i++){
	    scanf("%d %d", &x,&y);
	    int c =x*y;
	    
	    printf("%d",c);
	    
	    
	}
	return 0;
}
