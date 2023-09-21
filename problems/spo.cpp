// Link to the problem: https://szkopul.edu.pl/problemset/problem/mBwyEe59RPtYHCXiZM2b4Nol/site/?key=statement

#include<iostream>

int fib_results[59] = {0};

// int line(int n){
//     if(n == 1 || n == 2) return n;
//     return line(n - 1) + line(n - 2);
// }

int fib_mod10(int n)
{
    if (n == 1 || n == 2) return n;
    if(fib_results[n] != 0) return fib_results[n];
    else if(fib_results[n] == 0 && fib_results[n - 1] != 0)
    {
        fib_results[n] = (fib_results[n - 2] + fib_results[n - 1]) % 10;
        return fib_results[n];
    }
    else if(fib_results[n] == 0 && fib_results[n - 1] == 0)
    {
        fib_results[n - 1] = fib_mod10(n - 1) % 10;
        fib_results[n] = (fib_results[n - 2] + fib_results[n - 1]) % 10;
        return fib_results[n];
    }
}

int main()
{
    fib_results[1] = 1; fib_results[2] = 2;

    fib_mod10(60);
    // for(int i = 3; i < 60; ++i) 
    //     std::cout 
    //         << i << ".: " 
    //         << fib_results[i] << ": " 
    //         << fib_mod10(i) << " | " 
    //         << (2 * fib_mod10((i - 2) % 60) + fib_mod10((i - 1) % 60)) % 10 
    //         << std::endl;

    int n; std::cin >> n;
    std::cout << (2 * fib_mod10((n - 2) % 60) + fib_mod10((n - 1) % 60)) % 10;

    return EXIT_SUCCESS;
}
