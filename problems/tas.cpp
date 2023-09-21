// Link to the problem: https://szkopul.edu.pl/problemset/problem/2wbhMaJsVzARvqIh5tC0NGPm/site/?key=statement

#include <iostream>

int arr[100002];

void tas(){
    int n; std::cin >> n;
    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }

    int x = arr[0];
    for(int i = 0; i < (n + 1) / 2; ++i){
        if(arr[i] != x || arr[n - 1 - i] != x){
            std::cout << n - 1 - i << std::endl;
            return;
        }
    }

    std::cout << "BRAK" << std::endl;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int m; std::cin >> m;
    for(int o = 0; o < m; ++o) tas();

    return EXIT_SUCCESS;
}
