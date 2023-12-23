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



int main() {
    std::string a;
    std::cin>>a;
    std::string temp;
    std::vector<char> res;
    bool goOn = 1;
    for (int letter = 0;letter<a.size();letter++){
        if (a[letter] =='2' || ((!goOn)&& (a[letter]=='0'))){
            goOn =0;
            temp+=a[letter];
        }
        if (goOn) res.push_back(a[letter]);
        if(!goOn && a[letter] == '1') res.push_back(a[letter]);
    }
    std::sort(res.begin(),res.end());
    for (char &let:res) std::cout<<let;
    std::cout<<temp;

}




