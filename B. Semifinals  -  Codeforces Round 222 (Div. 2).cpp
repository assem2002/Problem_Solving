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
    int n;
    std::cin>>n;
    int k = n/2 ,rem = n-(n/2);
    std::string semi1,semi2;
    for(int i=0;i<k;++i) semi1+="1";
    for(int i=0;i<rem;++i) semi1+="0";
    semi2 = semi1;
    std::vector<int> first,second;
    int temp,temp2;
    for(int i=0;i<n;++i){
        std::cin>>temp>>temp2;
        first.push_back(temp);
        second.push_back(temp2);
    }
    int ind1 =0,ind2=0;
    for(int i=0;i<n;++i){
        if (first[ind1]<second[ind2]) semi1[ind1++] ='1';
        else semi2[ind2++] ='1';
    }
    std::cout<<semi1<<'\n'<<semi2;



}
















