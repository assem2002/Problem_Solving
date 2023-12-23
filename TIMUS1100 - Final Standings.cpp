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
//#include <bitset>
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


int main(){
    int n;
    std::cin>>n;
    std::set<int> v;
    std::unordered_map<int,std::queue<int>> m;
    while(n--){
        int id,problemsSolved;
        std::cin>>id>>problemsSolved;
        v.insert(problemsSolved);
        m[problemsSolved].push(id);

    }
    bool flag =0;
    for (std::set<int>::iterator i = --v.end() ; ; i--){
        if (*i == *v.begin()) flag = 1;
        int iterations = m[*i].size();
        while(iterations--){

            std::cout<<m[*i].front()<<" "<<*i<<'\n';
            m[*i].pop();
        }
        if (flag) break;
    }
    for(int i= 0 ; i<n ;i++)
}



