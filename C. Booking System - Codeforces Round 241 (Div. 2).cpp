//    std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )
//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
#include <iostream>
#include<numeric>
#include<vector>
#include<cmath>
#include<stack>
#include <iomanip>
#include <vector>
//#include<bits/stdc++.h>
#include <bitset>
//#include<iomanip>
#include <algorithm>
#include<queue>
//#include<deque>
//#include<numeric>
#include<set>
//#include<unordered_set>
#include<map>
//#include<fstream>
//#include<sstream>
//#include <thread>
//#include <chrono>
#include<cstring>
#include<string>
#include <unordered_map>
#include<memory>
#include <iostream>
#include <thread>
#include <atomic>

//Pardon me for not using the "using namespace std"

bool compare(std::pair<int,std::pair<int,int>> first,std::pair<int,std::pair<int,int>> second){
    if (first.first == second.first) return first.second.first<second.second.first;
    return first.first>second.first;
}

int main() {
    int n;
    std::cin>>n;
    std::vector<std::pair<int,std::pair<int,int>>> v;
    for(int i=1;i<=n;i++){
        int c,p;
        std::cin>>c>>p;
        v.push_back(std::make_pair(p,std::make_pair(c,i))); //take care of how you insert the data
    }
    int m;
    std::cin>>m;
    std::vector<std::pair<int,int>> tables;
    for(int i = 1 ; i <= m ;i++){
        int temp;
        std::cin>>temp;
        tables.push_back(std::make_pair(temp,i));
    }
    std::sort(tables.begin(),tables.end());
    std::sort(v.begin(),v.end(),compare);
    std::vector<std::pair<int,int>> res;
    int acc = 0;
    for(int group = 0 ; group<v.size();group++){
        for(int singleTable = 0 ; singleTable<tables.size();singleTable++){
            if (tables[singleTable].first>=v[group].second.first){
                res.push_back(std::make_pair(v[group].second.second,tables[singleTable].second));
                acc+=v[group].first;
                tables[singleTable].first = -1;
                break;
            }
        }
    }

    std::cout<<res.size()<<" "<<acc<<"\n";
    for (auto &element :res)
        std::cout<<element.first<<" "<<element.second<<"\n";

}














