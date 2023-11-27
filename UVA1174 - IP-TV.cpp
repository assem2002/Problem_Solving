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

struct disJointSet{
    int nodes;
    std::vector<int>parent;
    std::vector<int>theRank;
    disJointSet(int nodes):nodes(nodes){
        parent = std::vector<int>(nodes+1,-1);
        theRank = std::vector<int>(nodes+1,0);
        }
    int finder(int nodeNumber){
        if(parent[nodeNumber] ==-1) return nodeNumber;
        return parent[nodeNumber] = finder(parent[nodeNumber]);
    }
    bool linker(int f,int s){
        int fParent = finder(f);
        int sParent = finder(s);
        if(fParent != sParent){
            if (theRank[fParent]>theRank[sParent]){
                parent[sParent] =fParent;
            }
            else if(theRank[fParent]<theRank[sParent]){
                parent[fParent] =sParent;
            }
            else{
                parent[sParent] =fParent;
                theRank[fParent]++;
            }
            return 1;
        }
        return 0;

    }


};
int indexx = 1;
std::unordered_map<std::string,int> m;
std::pair<int,int> reserve(std::string firstCity, std::string secondCity){
    if (m[firstCity] == 0) m[firstCity] = indexx++;
    if(m[secondCity]==0) m[secondCity] = indexx++;
    return std::make_pair(m[firstCity],m[secondCity]);
}

struct node{
    int firstCity;
    int secondCity;
    int cost;
    bool operator < (const node &obj) const{
        return this->cost > obj.cost;
    }
};
int main(){

    int testCases;
    std::cin>>testCases;
    std::string line ="\0";
    while(testCases--){
        indexx = 1;
        m.clear();
        std::priority_queue<node> prio;
        int nodes,links;
        std::cin>>nodes>>links;
        disJointSet instance(nodes);
        while(links--){

            std::string f,s;
            int cost;
            int indf,inds;
            std::cin>>f>>s>>cost;

            std::pair<int,int> aa = reserve(f,s);
            indf = aa.first;
            inds = aa.second;
            prio.push({indf,inds,cost});
        }

        int t=0;
        long long total=0;
        while(!prio.empty()){
            node currentNode = prio.top();
            prio.pop();
            if(instance.linker(currentNode.firstCity,currentNode.secondCity)){
                total+=currentNode.cost;
                t++;
            }
        }
        std::cout<<line<<total<<'\n';line = "\n";

    }
    return 0;

}













