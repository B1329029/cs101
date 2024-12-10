#include <stdio.h>
int main() {
    int i = 12345; 
    int thousands=0;
    int units = 0;
    int j =0;
    thousands = (i / 1000) % 10;  
    units = i % 10;              
    j = i - (thousands * 1000) - units; 
    j += (units * 1000) + thousands;   
    printf("%d\n", j);

    return 0;
}
