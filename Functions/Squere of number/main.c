#include <stdio.h>

float square(float num){
    return ( num * num );
}


int main() {
    int num ;
    float n;
    printf("Enter num:\n");
    scanf("%d", &num);

    n = square(num);

    printf("Square of %d is : %.2f" ,num ,n);

    return 0;
}
