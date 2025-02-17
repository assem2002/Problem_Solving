#include<iostream>
#include<bits/stdc++.h>



int main(){
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    int maxi = 0; // Figure out the max number for further optimization.
    for(int i = 0; i< n; i++){
        std::cin>>v[i];
        maxi = std::max(maxi, v[i]);
    }
    std::vector<int> mem(n,-1); // preserve vector of all number. This should represent the longest increasing sequence starting from i.

    //Make sure to loop on the `v` vector decreasingly 
    // as the most left number in `v` depends on the information form the right numbers proceeding it.
    int sol = 0;
    for(int i = n-1; i >= 0; i--){
        int current = v[i];
        int maxx = 0;
        for(int j = i+1 ; j < n; j++){
            if(v[j] > current){
                maxx = std::max(maxx, mem[j]);
            }
        }
        mem[i] = maxx + 1;
        sol = std::max(sol, mem[i]);
    }
    std::cout<< sol <<std::endl;
    // for (auto i : mem){
    //     std::cout<< i <<" ";
    // }




    return 0;
}