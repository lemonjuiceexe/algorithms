// Link to the problem: https://szkopul.edu.pl/problemset/problem/NQamRQ2UZEwn6gPqo-l6nat9/site/?key=statement

#include <iostream>

const int MAXN = 30005;
int tables[MAXN]; bool already_seated[MAXN] = {0};

void check_index(int i){
    // std::cout << "Checking " << i << std::endl;
    if(already_seated[i]) return;
    already_seated[i] = 1;
    check_index(tables[i]);
}

int main()
{
    int n; std::cin >> n;
    for(int i = 1; i < n + 1; ++i)
    {
        std::cin >> tables[i];
    }

    int currently_checked_index = 1;
    int result = 0;
    bool new_index_found = true;
    while (new_index_found)
    {
        new_index_found = false;
        check_index(currently_checked_index);
        ++result;
        // Find first unchecked index
        for(int i = 1; i <= n; ++i)
        {
            if(!already_seated[i]) {
                currently_checked_index = i;
                new_index_found = true;
                break;
            }
        }
    }
    check_index(2);

    std::cout << result;

    return EXIT_SUCCESS;
}