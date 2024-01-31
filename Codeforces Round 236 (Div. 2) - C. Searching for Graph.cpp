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
////#include <thread>
////#include<limits>




int main(){
    int t;
    std::cin>>t;
    while(t--){
        int n,p;
        std::cin>>n>>p;
        p = ((n*(n-1))/2) - (2*n + p);
        for(int i =1 ;i<=n; ++i){
            for(int j = i+1 ;j<=n; ++j){
                if(i == 1 || i == 2)std::cout<<i<<' '<<j<<'\n';
                else if((p--)<= 0) std::cout<<i<<' '<<j<<'\n';
            }
        }
    }
    return 0;


}















