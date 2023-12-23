//    std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )
//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
#include <iostream>
//#include<numeric>
//#include<vector>
//#include<cmath>
//#include<stack>
//#include <iomanip>
//#include <vector>
#include<bits/stdc++.h>
//#include <bitset>
////#include<iomanip>
//#include <algorithm>
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
long long gcd(long long x, long long y)
{
    if (y==0) return x;
    return gcd(y,x%y);
}

long long lcm(long long x, long long y)
{
  long long l = x;
  return (l / gcd(x, y)) * y;
}

long long n,m;
unsigned long long total=0;
std::vector<long long> divisors(15,1);
int a=0;
std::vector<bool> arr(16,0);
long long lcmPreserver =1;

void calculatePermutation(){
    long long oddEven=0;
    a=0;
    oddEven = std::accumulate(arr.begin(),arr.end(),a);
    if (oddEven == 0) return;
    lcmPreserver =1;
    for (long long i = 0 ; i<m;++i) if (arr[i]) lcmPreserver = lcm(divisors[i],lcmPreserver);
    if (oddEven%2==1) total+=(n/lcmPreserver);
    else total-=(n/lcmPreserver);
}

void getPermutation(long long i =0){
    if (i == m) return calculatePermutation();
    arr[i] = 0;
    getPermutation(i+1);
    arr[i] =1;
    getPermutation(i+1);
}


int main(){
    while(std::cin>>n>>m){
        for(int i = 0 ; i<16 ; ++i) arr[i] =0;
        total=0;
        for(int i=0 ; i<m;++i) std::cin>>divisors[i];
        getPermutation();
        std::cout<<n-total<<std::endl;
    }
    return 0;
}













