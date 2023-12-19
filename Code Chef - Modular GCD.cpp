//    std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )
//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
#include <iostream>
//#include<numeric>
#include<vector>
#include<cmath>
//#include<stack>
//#include <iomanip>
//#include <vector>
#include<bits/stdc++.h>
//#include <bitset>
////#include<iomanip>
#include <algorithm>
//#include<queue>
////#include<deque>
////#include<numeric>
//#include<set>
//#include<unordered_set>
//#include<map>
////#include<fstream>
////#include<sstream>
////#include <thread>
////#include <chrono>
//#include<cstring>
//#include<string>
//#include <unordered_map>
////#include<memory>
////#include <iostream>
////#include <thread>
////#include<limits>



std::vector<long long> getDivisors(long long n){
    std::vector<long long> divisors;
    for(long long i=1 ;i*i<n ; ++i){
        if(!(n%i)){
            divisors.push_back(i);
            divisors.push_back(n/i);
        }
    }
    return divisors;

}

long long getmod(long long n,long long d,long long tree){
    long long base = n%d ;
    std::vector<long long> leftOvers;
    if(tree%2 ==1 && tree!=1) leftOvers.push_back(base);
    tree/=2;
    while(tree!=0){
        base*=base;
        if (!base) return 0;
        base%=d;
        if(tree%2 ==1 && tree!=1) leftOvers.push_back(base);
        tree/=2;
    }
    for(long long lefty:leftOvers){
        base*=lefty;
        if (!base) return 0;
        base%=d;
    }
    base%=d;
    return base;

}

int main(){
    int t;
    long long a,b,n;
    std::cin>>t;
    while(t--){
        std::cin>>a>>b>>n;
        std::vector<long long > mydivisors = getDivisors(std::abs(a-b));
        std::sort(mydivisors.begin(),mydivisors.end(),std::greater<long long>());
        bool flag =1;
        for(long long divisor :mydivisors){
            long long res = getmod(a,divisor,n) + getmod(b,divisor,n);
            if(res%divisor == 0){
                std::cout<<(divisor%1000000007)<<'\n';
                flag=0;
                break;
            }
        }
        if(flag)
            std::cout<<(getmod(a,1000000007,n) + getmod(b,1000000007,n))%1000000007<<'\n';
    }
    return 0;

}











