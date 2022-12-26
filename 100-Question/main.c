#include <stdio.h>

int main() {
    /*Write a C program to print your name, date of birth. and mobile number. Go to the editor
    Expected Output:
    Name   : Alexandra Abramov
    DOB    : July 14, 1975
    Mobile : 99-9999999999*/
    char name;
    int birth;
    double mobile;
    printf("******Welcome******\n");
    printf("Write your Name :\n");
    scanf("%d",&name);
    printf("Write your DOB:\n");
    scanf("%d",&birth);
    printf("Write your Mobile :\n");
    scanf("%lf",&mobile);
    printf("Name:%d\nDOB:%d\nMobile:%lf");

    return 0;
}
