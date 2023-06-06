//
// Created by iftek on 6/5/2023.
//
#include <iostream>

using namespace std;

void swap(int *a, int *b){ //swaps 2 variables without requiring extra memory
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

//write your functions here (Bubble, Selection, insertion)
void bubble_sort(int array[], int size){
    bool is_sorted = false;

    while(!is_sorted){

        is_sorted = true;

        for(int i = 0; i < size-1; i++){
            if(array[i] > array[i+1]){
                is_sorted = false;
                //int bag = array[i];
                //array[i] = array[i+1];
                //array[i+1] = bag;
                swap(&array[i], &array[i+1]);
            }
        }
    }
    cout << "Sorted with Bubble Sort" << endl;
}

void selection_sort(int array[], int size){
    for(int i = 0; i < size-1; i++){
        int smallest_in = i;

        for(int j = i+1; j < size; j++ ){
            if(array[smallest_in] > array[j]){
                smallest_in = j;
            }
        }

        if(smallest_in != i) {
            swap(&array[i], &array[smallest_in]);
        }
    }
    cout << "Sorted with Selection Sort" << endl;
}

void insertion_sort(int array[], int size){
    for(int i = 1; i < size; i++){
        int key = array[i];
        int j = i-1;

        while(key < array[j] && j >= 0){
            swap(&array[j], &array[j+1]);
            j--;
        }
    }
    cout << "Sorted with Insertion Sort" << endl;
}


void print_array(int array[], int size){
    for(int i=0; i < size; i++){
        cout << i << ": " << array[i] << endl;
    }
}

int main(){
    int data[] = {-2, 45, 0, 11, -9, 50, -63, -4, -2}; // our initial unsorted array

    int size_of_array = sizeof(data) / sizeof(data[0]); // figure out the number of elements in the array

    //call your sorting function here
//    bubble_sort(data,size_of_array);
    selection_sort(data, size_of_array);
//    insertion_sort(data, size_of_array);
    print_array(data, size_of_array);
     return 0;
}