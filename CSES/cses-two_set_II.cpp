#include <bits/stdc++.h>
#include<iostream>


int n;
#define mod 1000000007
int main (){
    std::cin>>n;
    // Get the number we want to collect.
    int n_needed;
    n_needed = ((n+1) * n) / 2; // Find total sum
    if(n_needed%2){ // Check if we can split up the total sum into two sets from the first place.
        std::cout<< 0 <<std::endl;
        return 0 ;
    } else {
        n_needed /=2;
    }

    std::vector<int> v(n_needed+1, 0); // preserve memory of a total of the sum of the set.
    v[0] = 1; // a solution for a number of value 0 is --> 1.
    for(int i = 1  ; i <= n; i++){
        //a small optimization.
        int opt = ((i + 1 ) * i ) / 2;
        // opt +=i; 
        opt++ ;
        opt = std::min(n_needed, opt);
        /* The table represents mainly the possible summitions (unique) for the number from 1 .. n_needed .
            This means that possible summition for the place [n_needed] is gonna hold all combinitions out of the {1,2,.., n} for both sets 
            (We proved that summition over all number from 1..n could be divided into two groups -- that means if you found solution for n_needed it's the sum of both sets)
            . We want half of them so we have two sets.
            The issue is that dividing solution at the end needs you to get rid of the `mod` and that could overflow even with `long long`.
        */
        int starter = opt /*n_needed is fine here also*/ - (i != n); 
        // int starter = n_needed - (i != n); 
        for (int j = starter ; j >= i; j--){ // loop decreasingly to avoid using the i'th contribution to itself as the number only get used once. 
            v[j] += v[j - i] ; 
            // std::cout<<"i : " << i << " j : " << j << " v[j] :" << v[j]<<std::endl;  
            v[j] %=mod; // no need for long long we use summition over mod of 10e9+7 which doesn't overflow.
        }
    }
    std::cout<<v[n_needed]<<std::endl;



}