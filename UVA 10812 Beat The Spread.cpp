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






int main(){
    int t;
    std::cin>>t;
    while(t--){
        double a,b,res1,res2;
        std::cin>>a>>b;
        res1 = (a+b)/2;
        res2 = (a-res1);
        if(res1<0 ||res2 <0 || ((int)(a+b))%2)std::cout<<"impossible\n";
        else (res1>=res2)? std::cout<<res1<<" "<<res2<<'\n' :std::cout<<res2<<" "<<res1<<'\n';
    }
    return 0 ;
}















