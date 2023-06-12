//
// Created by iftek on 6/12/2023.
//
#include<iostream>

using namespace std;
//-----------------<Utility>-------------------
void swap(int *a, int *b){ //swaps 2 variables without requiring extra memory
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
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
//-----------------<Utility>-------------------




int main(){
    int target;
//    int data[] = {-2, 45, 0, 11, -9, 50, -63, -4, -2}; //unsorted
    int data[] = {-63, -9, -4, -2, -2, 0, 11, 45, 50}; //sorted

    cout << "What are you looking for? ";
    cin >> target;



    int size_of_array = sizeof(data) / sizeof(data[0]);

    int locale;
//    locale = linear_search(data, size_of_array, target);
//    locale = binary_search(data,size_of_array, target);
    if(locale < 0){
        cout << "The item doesn't exist in the array!" << endl;
    }else{
        cout << "The item exists at the " << locale+1 << "th position." << endl;
    }

    //call the searching methods here
//    print_array(data, size_of_array);
    return 0;
}