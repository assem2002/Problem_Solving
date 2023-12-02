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
#include<unordered_set>
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


int main(){
    int n,k1,k2;
    std::cin>>n>>k1;
    std::queue<int> k1Stack;
    int temp;
    while(k1--) {
        std::cin>>temp;
        k1Stack.push(temp);
    }
    std::cin>>k2;
    std::queue<int> k2Stack;
    while(k2--){
        std::cin>>temp;
        k2Stack.push(temp);
    }
////    std::queue<int> k1Clone= k1Stack,k2Clone = k2Stack;
    std::vector<std::pair<std::queue<int>,std::queue<int>>> needed;

    int fights =0;
    while(true){
        fights++;
        int k1Current=k1Stack.front(),k2Current = k2Stack.front();
        k1Stack.pop();k2Stack.pop();
        if (k1Current>k2Current){
            k1Stack.push(k2Current);
            k1Stack.push(k1Current);
        }
        else{
            k2Stack.push(k1Current);
            k2Stack.push(k2Current);
        }

        if(k2Stack.empty()){
            std::cout<<fights<<" "<<1;
            return 0;
        }
        else if(k1Stack.empty()){
            std::cout<<fights<<" "<<2;
            return 0;
        }
        if (true){
            if (std::find(needed.begin(),needed.end(),std::make_pair(k2Stack,k1Stack))!=needed.end()){
                std::cout<<-1;
                return 0;
            }
            needed.push_back(std::make_pair(k2Stack,k1Stack));
        }


    }

}














