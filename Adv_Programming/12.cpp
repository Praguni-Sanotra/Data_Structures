// DMA IN CPP
#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
    int *p;
    p = new int;
    *p = 40;
    printf("%d\n", *p);
    delete p;
    return 0;
} 