// Link to the problem: https://szkopul.edu.pl/problemset/problem/rca1/site/?key=statement

#include <iostream>

const int INF = 1000005;
long long sum[INF] = {0};
long long results[INF];

int main(){
    int n, q; std::cin >> n >> q;

    for(int i = 1; i < n; ++i)
    {
        long long a; std::cin >> a;
        sum[i] = sum[i - 1] + a;
    }
    for(int i = 0; i < q; ++i)
    {
        int p, k; std::cin >> p >> k;
        results[i] = std::abs(sum[p-1] - sum[k-1]);
    }
    for(int i = 0; i < q; ++i){
        std::cout << results[i] << std::endl;
    }

    return EXIT_SUCCESS;
}