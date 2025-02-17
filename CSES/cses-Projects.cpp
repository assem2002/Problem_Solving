#include<iostream>
#include<bits/stdc++.h>


struct project{
    int a,b,p;
};

// I hate std's cmp functions  
bool func(const project &p1, const project &p) {
    return p1.a < p.a;
}

bool func2(const int p, const project &p1) {
    return p1.a > p;
}

int main(){
    int n;
    std::cin>> n;
    std::vector<project> v(n);
    for(int i = 0; i< n;i++){
        std::cin>>v[i].a>>v[i].b>>v[i].p;
    }
    std::sort(v.begin(),v.end(), func); // Binary Search

    std::vector<long long> prefix(n+1,0);

    // build the chain bottom up, as that's how we connect the chains.
    //(it's based on how you're gonna build up the chains -- we use end to start)
    for(int i = n-1;i>=0;i--){ 
        // Use upper_bound as we want a number that's greater than what we have in v[i].b
        int lower_bond = std::upper_bound(v.begin()+i+1,v.end(),v[i].b,func2)- v.begin(); // Find first number that could be chained with you
        //use the index in the prefix to know the best chain so for at that number.
        prefix[i] = std::max(prefix[lower_bond]+v[i].p,prefix[i+1]);
    }
    std::cout<<prefix[0]<<std::endl;
    return 0;
}