// Link to the problem: https://szkopul.edu.pl/problemset/problem/mBwyEe59RPtYHCXiZM2b4Nol/site/?key=statement

#include<iostream>

int line(int n)
{
    if(n == 1 || n == 2) return n;
    return line(n - 1) + line(n - 2);
}
int circle(int n)
{
    if(n == 1 || n == 2) return n;
    return 2 * line(n - 2) + line(n - 1); 
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << circle(n) % 10;

    return EXIT_SUCCESS;
}
