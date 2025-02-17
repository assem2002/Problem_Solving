#include<iostream>
#include <bits/stdc++.h>




#define mod 1000000007
int main(){
    int n_coins;
    int x;
    std::cin>>n_coins>> x;
    // We have to make sure the passed numbers are all distinct
    // as if we have some duplicate coin, We'll face duplication of the possible sums.]
    // Example :  3 5 3 2.
    // the latter 3 will build the table, for instance j = 3, 6, 9, 12, 15, ...
    // And the first 3 will be doing the same exact combination again.
    std::unordered_set<int> v;
    int temp;
    for(int i = 0; i< n_coins; i++){
        std::cin>>temp;
        v.insert(temp);
    }
    // copy to vv for eaiser indexing :).
    std::vector<int> vv;
    for(auto n : v){
        vv.push_back(n);
    }

    // The main point is to build the table in some order and to be only looking at one direction of the possibilities
    // to avoid creating a combination that's gonna be duplicated.
    // A B C D
    // Solve like that :
    // B C D (only B looks at the combination using C D. If it looks back at A, then A when it'll do its job it will look at B C D)
    // This will make B looking at (C D) + (A)
    // And A looks (B C D)
    // Which will build reptitive combinations.
    std::vector<int> mem(x+1,0);
    mem[0] = 1; // Base case
    for(int i = n_coins-1 ; i >= 0; i--){
        for(int j = vv[i]; j<=x;j++){
            mem[j] += mem[j-vv[i]];
            mem[j] %= mod;
        }
    }
    std::cout<<mem[x]<<std::endl;


    return 0;
}