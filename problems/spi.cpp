// Link to the problem: https://szkopul.edu.pl/problemset/problem/JDLRIKmmfMWZ7G1Sy6Ldq7m8/site/?key=statement

#include <iostream>

int div_plus_one(int n, int m) { return (n/m) + (n%m != 0); }

int spi(int n){
    int group_size = 0, result = 0;
    for(int i = 0; i < n; ++i)
    {
        char c;
        std::cin >> c;
        
        if(c == 'W'){
            result += div_plus_one(group_size, 3);
            group_size = 0;
        } 
        else ++group_size;
    }
    result += div_plus_one(group_size, 3);

    return result;
}

int main()
{
    int n; std::cin >> n;
    
    std::cout << spi(n);

    return 0;
}