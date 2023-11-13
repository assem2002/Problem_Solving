//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
//    std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )
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
#include<string>
#include <unordered_map>

std::vector<std::pair<int,int>> v;
int main() {
    int n,d;
    std::cin>>n>>d;
    while(n--){
        std::pair<int,int>temp;
        std::cin>>temp.first>>temp.second;
        v.push_back(temp);
    }
    std::sort(v.begin(),v.end());
    long long maximum = 0;
    long long maximumLocal = v[0].second;
    int groupLead = 0;
    for (int i = 1 ; i <(int)v.size();i++){
        if (v[i].first-v[groupLead].first>=d){
            if (maximumLocal>maximum) maximum = maximumLocal;
            for (int j =groupLead ; j<=i;j++){
                if (v[i].first-v[j].first<d) {
                    groupLead=j;
                    break;
                }
                else maximumLocal-=v[j].second;
            }
        }
        maximumLocal += v[i].second;
    }
    if (maximumLocal>maximum) maximum = maximumLocal;
    std::cout<<maximum;


}




