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




long long getcombinations(long long n,long long r){
    long long arr[31] {1};
    long long remo[31] {1};

    for(long long i=0;i<31;i++)arr[i]=1;
    for(long long i=0;i<31;i++)remo[i]=1;
    long long rem=1;
    for(long long i=n; i>(n-r);--i)arr[i] =i;

    for(long long i =r ;i>0;--i)remo[i] =i;

    for(long long i =r ;i>0;--i){
        for(long long j =0;j<31;j++){
            long long temp = std::gcd(remo[i],arr[j]);
            remo[i]/=temp;
            arr[j]/=temp;
        }
    }
    long long up =1;
    for(long long i =r ;i>0;--i)rem*=arr[i];
    for(long long i=0;i<31;i++)up*=arr[i];
    return up/rem;

}
long long res=0;
int main(){
    long long n,m,t;
    std::cin>>n>>m>>t;
    long long boys=t-1 ,girls=1;
    if(n<t)boys=n;
    girls = t-boys;
    do{
//        std::cout<<boys<<' '<<girls<<'\n';
        res += (getcombinations(n,boys--)*getcombinations(m,girls++));
    }
    while(boys>3 &&girls>0&& girls<=m &&boys<=n);

    std::cout<<(res+(!res));
    return 0;


}
















