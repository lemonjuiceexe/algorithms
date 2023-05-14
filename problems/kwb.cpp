// Link to the problem: https://szkopul.edu.pl/problemset/problem/kwb/site/?key=statement

#include <iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    const int INF = 1000001;
    int n, m; std::cin >> n >> m;
    int array[INF], counts[INF] = {0};
    int amount_of_numbers = 0;
    for(int i = 0; i < n * m; i++){
        std::cin >> array[i]; 
        amount_of_numbers += array[i] != 0;
    }
    for(int i = 0; i < n * m; i++)
    { 
        ++counts[array[i]];
    }
    int maxv = -1, maxi = -1;
    for(int i = 1; i < INF; i++){
        // std::cout << "Amount of " << i << ": " << counts[i] << std::endl;
        // std::cout << counts[i] << " > " << maxv << " " << (counts[i] > maxv) << std::endl;
        if(!(counts[i] > maxv)) continue;
        if(counts[i] >= (amount_of_numbers / 2) + 1){
            maxi = i; 
            break;
        }
        maxv = counts[i];
        maxi = i;
    }
    std::cout << maxi;

    return 0;
}
