//
// Created by iftek on 6/5/2023.
//
#include <iostream>

using namespace std;

//write your functions here (Bubble, Selection, insertion)

void print_array(int array[], int size){
    for(int i=0; i < size; i++){
        cout << i << ": " << array[i] << endl;
    }
}


int main(){
    int data[] = {-2, 45, 0, 11, -9}; // our initial unsorted array

    int size_of_array = sizeof(data) / sizeof(data[0]); // figure out the number of elements in the array

    //call your sorting function here

    print_array(data, size_of_array);

}