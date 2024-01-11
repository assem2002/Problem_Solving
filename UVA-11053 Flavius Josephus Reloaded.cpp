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
#include<sstream>
////#include <thread>
////#include <chrono>
//#include<cstring>
//#include<string>
//#include <unordered_map>
////#include<memory>
////#include <iostream>
////#include <thread>
////#include<limits>



int main(){
    while(true){
        std::unordered_map<int,int> m ;
        long long n,a,b;
        std::cin>>n;
        if(n==0)break;
        std::cin>>a>>b;
        int x=0 ,limit =1 ,res=0;
        while(true){
            if(m[x] && m[x] <= limit){
                res = limit - m[x];
                break;
            }
            m[x] = limit;
            long long  temp = x%n;
            x = (((a%n)*((temp)*(temp)%n))%n + (b%n))%n;
            ++limit;
        }
        std::cout<<n-res<<'\n';
    }
    return 0 ;
}















