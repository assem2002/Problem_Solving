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
    long long a,b;
    std::cin>>a>>b;
    long long lcmm =std::lcm(a,b);
    long long dasha = lcmm/a - 1;
    long long masha = lcmm/b - 1;
    if(std::abs(dasha-masha) ==1) std::cout<<"Equal";
    else if(masha>dasha) std::cout<<"Masha";
    else std::cout<<"Dasha";
    return 0;



}
















