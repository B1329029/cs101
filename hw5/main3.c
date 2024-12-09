#include <stdio.h>
int main (){
    for(int a=1;a<=81;a++){
        int i= (a-1)/9+1;
        int j= (a-1)%9+1;
        printf("%d*%d=%d\t",i,j,i*j);
        if(a%9==0){
            printf("\n");
        }
    }
    return 0;
}
