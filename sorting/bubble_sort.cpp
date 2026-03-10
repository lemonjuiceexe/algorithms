#include <iostream>
#include <utility>

void bubble_sort(int* array, int n){
    bool sorted = false;
    for(int i = 0; i < n && !sorted; ++i){
        sorted = true;
        for(int j = 0; j < n - i - 1; ++j){
            if(array[j] > array[j + 1]){
                std::swap(array[j], array[j + 1]);
                sorted = false;
            }
        }
    }
}

int main(){
    int input[10] = {2, 7, -20, 100, 13, 16, 1, 3, 2, 33};

    bubble_sort(input, 10);
    
    for(int number : input){
        std::cout << number << " ";
    }

    std::cin >> std::ws;
    return EXIT_SUCCESS;
}