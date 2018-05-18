#include <stdio.h>  
#include <stdlib.h>  
#define size 3  
int main() {  
    int x,y;  
    int a,b,i;  
    int Max;  
    scanf("%d %d",&x,&y);  
    if(x>y){  
        for(i=1;i<=y;i++){  
            a=x%i;  
            b=y%i;  
            if(a==0 && b==0){  
                Max=i;                
            }             
        }  
        printf("%d\n",Max);  
    }  
        if(x<y){  
        for(i=1;i<=x;i++){  
            a=x%i;  
            b=y%i;  
            if(a==0 && b==0){  
                max=i;   
            }             
        }  
        printf("%d\n",Max);  
    }  
    return 0;  
}  
