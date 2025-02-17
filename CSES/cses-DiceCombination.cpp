
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;

#define MOD 1000000007

int n;


int main() {
    std::cin>>n;
    std::vector<int> v(n+2,0);
    v[0] = 1;
    for(int i = 1; i<=n;i++){
        for(int j=1;j<=6;j++){
            if(j>i) break;
            v[i] += v[i-j];
            v[i] %= MOD;
        }
    }
    std::cout<<v[n]<<std::endl;
    return 0;
}