#include <stdio.h>

void roll(int x,int h);

int main() {
    int t,a,b;
    scanf("%d",&t);

    
for(int i =1; i<=t;i++){
        scanf("%d%d",&a,&b);

        roll(a,b);
    }
	
	
	return 0;
}

void roll(int x,int h){
     if (x>=h){
         printf("YES\n");
     }
    else{
        printf("NO\n");
    }
    
}