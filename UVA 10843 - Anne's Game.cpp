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




long long getmod(long long n,long long d,long long tree){
    long long base = 1 ;
    while(tree){
        if (tree&1) base*=n%d;
        base%=d;
        n =(n%d*(n%d))%d;
        tree/=2;
    }
    base%=d;
    return base;

}




int main(){
    int t;
    std::cin>>t;
    for (int i=0; i <t; ++i){
        long long temp;
        std::cin>>temp;
        std::cout<<"Case #"<<i+1<<": "<<getmod(temp,2000000011,temp-2)<<"\n";
    }
    return 0;


}











