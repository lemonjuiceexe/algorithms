#include <iostream>
#include <utility>

void insertion_sort_swap(int* array, int n){
    for(int i = 1; i < n; ++i){
        for(int j = i; j > 0 && array[j] < array[j - 1]; --j){
            std::swap(array[j], array[j - 1]);
        }
    }
}
void insertion_sort(int* array, int n){
    for(int i = 1; i < n; ++i){
        int j = i - 1;
        int value = array[i];
        for(; j >= 0 && value < array[j]; --j){
            array[j + 1] = array[j];
        }
        array[j + 1] = value;
    }
}

int main() {
    int input[10] = {2, 7, -20, 100, 13, 16, 1, 3, 2, 33};

    insertion_sort(input, 10);

    for (int number : input) {
        std::cout << number << " ";
    }

    std::cin >> std::ws;
    return EXIT_SUCCESS;
}