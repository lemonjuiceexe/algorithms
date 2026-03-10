#include <iostream>
#include <utility>

void selection_sort(int *array, int n) {
    for (int i = 0; i < n; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (array[j] < array[min_index]){
                min_index = j;
            }
        }
        std::swap(array[i], array[min_index]);
    }
}

int main() {
    int input[10] = {2, 7, -20, 100, 13, 16, 1, 3, 2, 33};

    selection_sort(input, 10);

    for (int number : input) {
        std::cout << number << " ";
    }

    std::cin >> std::ws;
    return EXIT_SUCCESS;
}