// Link to the problem: https://szkopul.edu.pl/problemset/problem/aCnLx5So80oufna1YLlfuuUY/site/?key=statement

#include <iostream>

const int INF = 1e6;
long long dist[INF]; 

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr);

    int n, q; std::cin >> n >> q;
    for(int i = 1; i < n + 1; ++i)
    {
        std::cin >> dist[i];
        dist[i] += dist[i - 1];
    }
    for(int i = 0; i < q; ++i)
    {
        int x, y; std::cin >> x >> y;
        std::cout << 
            ((dist[n] - dist[x - 1]) / 2 >= (dist[n] - dist[y - 1]) ? "TAK" : "NIE") 
        << std::endl;
    }

    return EXIT_SUCCESS;
}