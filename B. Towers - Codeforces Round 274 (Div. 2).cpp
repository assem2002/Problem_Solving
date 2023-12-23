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
    int n,k;
    std::cin>>n>>k;
    std::vector<std::pair<int,int>> v;
    int sum=0;
    for(int i=0;i<n;++i){
        std::pair<int , int> temp;
        std::cin>>temp.first;
        temp.second =i+1;
        v.push_back(temp);
        sum+=temp.first;
    }
    std::vector<std::pair<int,int>> res;
    std::sort(v.begin(),v.end());
    bool flagzero = (sum%n == 0);
    int newk=0;
    for(;newk<k;++newk){
        if ((flagzero && !(v[n-1].first - v[0].first))) break;
        v[n-1].first-=1;
        v[0].first+=1;
        res.push_back(std::make_pair(v[n-1].second,v[0].second));
        std::sort(v.begin(),v.end());
    }
    std::cout<<(v[n-1].first - v[0].first)<<' '<<newk<<'\n';
    for(auto &a:res) std::cout<<a.first<<' '<<a.second<<'\n';



}
















