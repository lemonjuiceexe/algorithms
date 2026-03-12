#include <iostream>
#include <utility>

void merge(int* array, int* result, int left, int mid, int right){
    for(int counter = 0, i = left, j = mid + 1; counter < right - left + 1; ++counter){
        if(i > mid){
            result[counter] = array[j++];
        } else if(j > right){
            result[counter] = array[i++];
        } else if(array[j] < array[i]){
            result[counter] = array[j++];
        } else if(array[i] <= array[j]){
            result[counter] = array[i++];
        }
    }
}

void merge_sort(int* array, int* result, int left, int right){
    if(left >= right) return;

    int mid = (left + right) / 2;
    merge_sort(array, result, left, mid);
    merge_sort(array, result, mid + 1, right);
    
    merge(array, result, left, mid, right);
    for(int i = left; i <= right; ++i){
        array[i] = result[i - left];
    }
}

int main(){
    int input[10] = {2, 7, -20, 100, 13, 16, 1, 3, 2, 33};
    int result[10] = {0,0,0,0,0,0,0,0,0,0};
    merge_sort(input, result, 0, 9);
    
    for(int number : result){
        std::cout << number << " ";
    }

    std::cin >> input[0];
    return EXIT_SUCCESS;
}