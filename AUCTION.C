#include <stdio.h>

int main(void) {
	int  x;
	scanf("%d",&x);
	for (int i =0 ; i<x;i++){
	    int a,b,d,c;
	    scanf("%d%d%d",&a,&b,&c);
	    if (a>b && a>c){
	    printf("Alice\n");}
	    else if (b>a && b>c){
	    printf("Bob\n");}
	    else{
	    printf("Charlie\n");}
	    
	    
	}
	return 0;
}