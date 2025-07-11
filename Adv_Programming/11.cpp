// Dynamic Memory Location 
// No access to the memory
// No access to data 
// Memory space can't be use or modified
// Mmeory will be there and may cause memory leak

// IN C



#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int *p;
    p = (int *)malloc(sizeof(int)); // Allocating memory dynamically
    *p = 40;
    printf("%d\n", *p);
}