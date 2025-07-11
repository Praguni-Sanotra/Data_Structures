//RECURSION

#include<iostream>
#include<stdio.h>
using namespace std ;

int num = 0;
void func(){

    if ( num == 5)// base case 
        return;
    printf("Hello World\n");
    num++;
    func(); // This will call the function recursively
}

int main(){
    func( );
}