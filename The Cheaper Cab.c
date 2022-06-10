#include <stdio.h>

int main(void) {
    
    int n,x,y;
    scanf("%d",&n);
    for(int i =1; i<=n;i++){
    scanf("%d",&x);
    scanf("%d",&y);
    
        if (x<y){
            printf("FIRST\n");
        }
        
       else if (x>y){
            printf("SECOND\n");
        }
        
        else if (x==y){
            printf("ANY\n");
        }
        
    }
}