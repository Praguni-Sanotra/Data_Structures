//Structure Pointer 

/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Data {
    int a;
    float b;
};

struct Data *p;

int main(){
    //int *p;
    //p= (int *)malloc(sizeof(int));
    p = (struct Data *)malloc(sizeof(struct Data));
    p -> a = 10;
    cout << (*p).a << endl;
    return 0;
} */



//PONTER TO A CONST 

/* #include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    const float hello = 3.14;
    const float *helloPtr;
    helloPtr = &hello; 
} */


// CONSTANT POINTER 

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    const float hello = 3.14;
    const float * const helloPtr = &hello; // This pointer cannot change the address it points

    float value = 22.97;
    //helloPtr = &value; // This line will cause an error because helloPtr is a constant pointer
}


// Static Data and member function