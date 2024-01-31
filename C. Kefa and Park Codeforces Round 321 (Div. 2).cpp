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
#include<sstream>
////#include <thread>
////#include <chrono>
//#include<cstring>
//#include<string>
//#include <unordered_map>
////#include <thread>
////#include<limits>



using namespace std;
int main(){
    int n,m;
    std::cin>>n>>m;
    std::vector<bool>whoBecameParent(n+1,false);
    std::vector<bool>cats;
    std::vector<std::vector<int>> connections(n+1);
//    connections.reserve(n+1);
    cats.push_back(false);
    for(int i =1 ; i<=n;++i){
        bool temp;
        std::cin>>temp;
        cats.push_back(temp);
    }
    for(int i =1;i<n;++i){
        int x,y;
        std::cin>>x>>y;
        connections[x].push_back(y);
        connections[y].push_back(x);
    }
    std::queue<std::pair<int,int>> levelsOfSuccsessions;// child,maxcatsfound

    levelsOfSuccsessions.push({1,0});
    int resturantsResult =0;
    while(!levelsOfSuccsessions.empty()){
        std::pair<int,int> current = levelsOfSuccsessions.front();
        levelsOfSuccsessions.pop();

        whoBecameParent[current.first]=true;

        int sizeofConnections = connections[current.first].size();

        bool flag=false; // the current node didn't get connceted to anyone.
        int tempp =(cats[current.first]==0)?0:current.second+1;
        if(tempp>m) continue;
        for(int i =0;i<sizeofConnections ;++i){
            int next = connections[current.first][i];
            if(whoBecameParent[next]) continue;
            flag =true;
            levelsOfSuccsessions.push({next,tempp});
        }
        if(!flag) resturantsResult++;
    }
    std::cout<<resturantsResult;
    return 0;


}













