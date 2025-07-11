#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main () {
    int num = 20;
    int *ptr = &num;
    int **pptr = &ptr;

    printf("%d \n", ptr);
    printf("%d \n", pptr);
    printf("%d \n", **pptr);
    printf("%d \n", ***(&pptr));
    printf("%d \n", *(&pptr));
    printf("%d \n", *(& num));
    printf("%d \n", **(&ptr));

    return 0;
}