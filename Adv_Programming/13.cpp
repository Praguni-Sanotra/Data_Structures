#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    int n; scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));
    if(p == NULL){
        cout << "Memory Allocation failed....!";
        exit(1);
    }
    else{
        for(int i = 0; i<n ; i++){
            scanf("%d", p+i);
        }
        for(int i = 0; i<n; i++){
            printf("%d\t", *(p+i));
        }
    }
    delete(p);
    return 0;
}