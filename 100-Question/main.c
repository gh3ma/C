#include <stdio.h>


/*int main() {
    // 1- Program for calculate power of numbers .

    int i;
    int num;
    int pow;
    int res=1;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Enter Power: ");
    scanf("%d", &pow);
    i = 1;
    while (i<= pow){
        res = res * num;
        i++;
    } //end-while
    printf("num^pow = %d\n",res);
    */

    //2. Write a C program to convert a given integer (in days) to years,
    //months and days,assumes that all months have 30 days and all years have 365 days.
    /*

    int ndays ,year ,week ,month ,days;
    printf("Enter number of days:\n");
    scanf("%d", &ndays);
    year  = ndays / 365 ;
    ndays = ndays - (365 * year);

    month = ndays / 30 ;
    days = ndays - (month * 30);

    printf("{%d} Years\n", year);
    printf("{%d} Monthes\n", month);
    printf("{%d} Days\n", days);
    */

    //3.Find Max & Min of numbers with loop .
    /*
     int max = 0 ;
     int min = 10000;
     int x;

    printf("How much number u want to enter?\n");
    scanf("%d" , &x);

    for (int i = 0; i < x ; ++i) {
        int num ;
        printf("Enter the numbers one by one:\n");
        scanf("%d",&num);
        if (num > max)
            max = num ;
    }
    printf("Max = %d", max);
    */

    //4.(A program that lists the full divisors of the integer
    // number entered from the keyboard.)
    //(Rule): a mod (1,2,…….,a)= 0.
    /* int a;
     printf("Enter a number:\n");
     scanf("%d" ,&a);
     printf("Full divisors of (%d):\n" ,a);
       for (int i = 1 ; i <= a ; i++){
           if (a % i == 0)
               printf("*--%d--*\n", i);
       }*/

    //5.Find solution of Delta in math .
    /*double Delta, DeltaRoot, a, b, c,x12;
    double x1 ,x2 ;
    printf(" Enter A & B & C :\n");
    scanf("%lf\n%lf\n%lf", &a, &b, &c);

    Delta = (b * b) - (4 * a * c);
    DeltaRoot = sqrt(Delta);

    x1 = ((-1) * b + DeltaRoot) / (2 * a);
    x2 = ((-1) * b - DeltaRoot) / (2 * a);
    x12 = (-1 * b) / (2 * a);

    if (Delta > 0) {
        printf("Deltax1 is: %.2lf\nx2 is: %.2lf\n:", x1, x2);
    }else if (Delta == 0) {

        printf("Delta = 0\nThere is 2 solution:\nx1 & x2 = %.2lf", x12);
    }else if (Delta < 0){
        printf("There isn't solution\n");
    }*/

    //6.According to the n number entered from the keyboard, the sum of the integers from 1 to n (t1)
    //the sum of odd integers from 1 to n (t2) and the sum of even integers from 1 to n (t3) .
    //(Rule):
    //t1= 1+2+3+…….+n
    //t2= 1+3+5+…….+n
    //t3= 2+4+6+…….+n
    /*
      int t1 ,t2 ,t3 ,n ;
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i) {
        t1 += i;
    }
    printf("t1=%d\n" , t1);

    for (int u = 0; u <= n ; u+=2) {
        t2 += u ;
    }
    printf("t2=%d\n" , t2);
    for (int j = 1; j < n ; j+=2) {
        t3 += j ;
    }
    printf("t3=%d\n" , t3);
     */

    //7. Write a program in C to store elements in an array and print it
    /*int Array[5];
    int i ;

    for (i = 0 ; i < 5; ++i) {

        printf("Element %d:" , i);
        scanf("%d", &Array[i]);

    }
    printf("Elements in array are:  ");
    for (i = 0; i < 5; ++i) {
        printf("%d\t" ,Array[i] );

    }*/

    //8. Write a program in C to read n number of values in an array and display it in reverse order
   /* int Array[100];
    int i ,n ;
    printf("How much number u want enter?\n");
    scanf("%d" , &n);

    for (int i = 0; i < n ; ++i) {

        printf("Enter %d element:" , i);
        scanf("%d" ,&Array[i]);
    }
    printf("Reverse numbers are:\n");
    for (int i = n-1 ; i >=0 ; --i) {

        printf("  %d\t" , Array[i]);*/

    //9.Write a program in C to find the sum of all elements of the array
    /*
    int n;
    int  sum = 0 , a[100] ;
    float avg ;
    printf("How much number?\n");
    scanf("%d" , &n);

    for (int i = 0; i < n; ++i) {
        printf("%d-num:" ,i + 1);
        scanf("%d" , &a[i]);
        sum += a[i];
    }
    avg = (float )sum / n ;
    printf("\nsum is = %d\n" ,sum);
    printf("Average is :%.2f" ,avg);
     */

    //10. Write a program in C to find the maximum and minimum element in an array.
   /* int a[100];
    int n = 5  ;
    int i, max, min ;
    printf("How much number?\n");
    scanf("%d" ,&n);
    for ( i = 0; i < n; ++i) {
        printf("Enter %d number:" , i +1);
        scanf("%d" , &a[i]);
    }
    max = a[0];
    min = a[0];
    for (int i = 0; i < n ; ++i) {
        if( a[i] > max ){
            max = a[i];
        }else if (a[i]< min)
            min = a[i];
    }
    printf("max is %d\n" , max);
    printf("min is %d\n" , min);
*/


   //11.(Assume you have the following table containing students
   //grades. Write a C program to calculate the average of each student and store the result in the average column
   //(row index 4). Then print the student (Id and average) whose get the highest average.Initialize the 2- dimensional
   //

    int str1 (char str2[]);
    int fonk(char c, char p[], int y[]);

int main() {
            char str1[80],chr[80];
            int n, i, x, ctr[80];
    printf("Enter u studenr number:");
    scanf("%s" ,str1);
    n = str1 (str1);
    chr[0] = str1[0];
    ctr[0] = 1;
    x = 0;
    for (int i = 0; i < n; ++i) {

        if (!fonk(str1[i], chr, x, ctr)){
            x++;
            ctr[x] = str1[i];
            ctr[x] = 1 ;
        }
    }
    for (int i = 0; i <= x ; i++)
        printf("%c\t%d\n" , chr[i] ,ctr[i]);



    return 0;
    }
