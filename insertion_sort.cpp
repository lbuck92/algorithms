//Lauren Writes... Insertion Sort
//3.29.2018, c++

#include <iostream>
using namespace std;

#define array_size(array) (sizeof((array))/sizeof((array[0])))

void doInsertionSort(int arr[], int sizeOfArray){

    int key,j;
    
    std::cout << "Initial array: ";
    for(int i = 0; i < sizeOfArray; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    for(int i = 1; i < sizeOfArray; i++){
        key = arr[i];
        j = i-1;
        while(j>-1 && arr[j] > key){
            arr[j+1] = arr [j];
            j = j-1;
        }
        arr[j+1] = key;
    }

    std::cout << "Sorted array: ";
    for (int i = 0; i < sizeOfArray; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

}

int main(){
    int array1[6] = {8,5,6,2,9,3};
    doInsertionSort(array1, array_size(array1));

    int array2[10] = {8,3,5,3,67,8,34,2,89,100};
    doInsertionSort(array2, array_size(array2));
    return 0;
}