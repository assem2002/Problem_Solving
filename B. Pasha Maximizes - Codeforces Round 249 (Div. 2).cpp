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
int main(){
    std::string tempNumber;
    int k;
    std::cin>>tempNumber>>k;
    std::vector<char> v;
    for(char &letter :tempNumber) v.push_back(letter);
    for(int digit =0 ;digit<v.size(); digit++){
        int currentSearch = 9;
        auto currentDigitIter = v.begin()+digit;
        if (k==0) break;
        while(currentSearch){
            auto found = find(currentDigitIter,v.end(),char(48+currentSearch--));
            if (found == v.end() || ((int)(found-currentDigitIter)>k) || (*found)<=v[digit]) continue;
            else{
                char temp = *found;
                v.erase(found);
                v.insert(currentDigitIter,temp);
                k-=found-currentDigitIter;
                break;
            }

        }
    }
    for(char &letter:v) std::cout<<letter;
    return 0;



}








