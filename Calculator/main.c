#include <stdio.h>


int main() {
   //float addition ,subtraction ,multiplication ,division ;
   int x ;
   float a ,b ,c ;
    printf("Enter a & b numbers:\n");
    scanf("%f\n%f" , &a ,&b);
    printf("Enter the number of operation you want calculate it:\n");
    printf("1- addition:\n");
    printf("2- subtraction:\n");
    printf("3- multiplication:\n");
    printf("4- division:\n");
    scanf("%d", &x);
    switch (x) {
        case 1:
        c = a + b ;
            printf("%.2f" ,c);
            break;
        case 2:
            c = a - b ;
            printf("%.2f" ,c);
            break;
        case 3:
            c = a * b ;
            printf("%.2f" ,c);
            break;
        case 4:
            c = a / b ;
            printf("%.2f" ,c);
            printf("%.2f" ,c);
            break;
    }
    return 0;
}
