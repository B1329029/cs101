#include <stdio.h>
int main() {
    double pi = 4.0;
    int flag = 1;
    long ipi = 0;
    int x = 0;
    for (int i=3 ; i<=1000000 ; i+=2){
        if (flag==0){
            pi+=(4.0/i);
            flag ++;
        }
        else if (flag==1){
            pi-=(4.0/i);
            flag --;
        }
        ipi = pi*1000000;
        if (ipi == 314159){
            x=i;
            break;
        }
    }
    printf("%.5f",pi);
    return 0;
}