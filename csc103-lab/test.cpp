#include <stdio.h>
#include <iostream>
using namespace std;

void shiftRight(char myarray[], int size, int numShift) {
    int k = (numShift + 2 * size) % size;
    cout << k<< endl;
    for(int j = 0; j< k; j++){
        int temp;
        for(int i =0; i < (size-1); i++){
            temp = myarray[size-1];
            myarray[size-1]=myarray[i];
            myarray[i]=temp;
        }
    }
}

int main()
{
    char myarray[] = {'a','b','c','a','d'};
    shiftRight(myarray,5,-3);
    for(int i=0; i< 5; i++){
        cout<< myarray[i] << ' ';
    }
    cout << endl;
    return 0;
}