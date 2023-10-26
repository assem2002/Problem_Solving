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


struct edge{
    int from , to;
    long double w;
    edge(int from, int to ,long double w):from(from),to(to),w(w){}

    bool operator <(const edge& e2) const{
        return ((this->w) > e2.w);
    }
};

struct disJointSet{
    std::vector<int> parent;
    std::vector<int> rankk;

    disJointSet(int n){
        parent = std::vector<int> (n+1,-1);
        rankk = std::vector<int> (n+1,-1);
    }
    int findParent(int lost){
        if (parent[lost] == -1)
            return lost;
        return parent[lost] = findParent(parent[lost]);
    }
    bool link(int firstNode , int SecondNode){
        int parent1 = findParent(firstNode);
        int parent2 = findParent(SecondNode);
        if ( (parent1 != -1 && parent2 != -1)&& parent1 == parent2 )
            return 0 ;
        else if (rankk[parent1]>rankk[parent2]){
            parent[parent2] = parent1;
            rankk[parent1]++;
            return 1 ;
        }
        else if (rankk[parent1]<rankk[parent2]){

            parent[parent1] = parent2;
            rankk[parent2]++;
            return 1;
        }
        else{

            parent[parent1] = parent2;
            return 1;
        }


    }

};


int main()
{
    int n,m;
    int testCase;
    std::cin>>testCase;
    while(testCase--){
        std::cin>>n;
        std::priority_queue<edge> q;
        std::vector<std::pair<int,int>> edgesCord;
        for(int i = 0 ; i<n ;i++){
            std::pair<int,int> temp;
            std::cin>>temp.first>>temp.second;
            edgesCord.push_back(temp);
        }
        for(int f = 0 ; f<(n-1) ;f++){
            std::pair<int,int> boss = edgesCord[f];
            for(int s= f+1 ; s<n ; s++){
                std::pair<int,int> emp = edgesCord[s];
                edge temp(f+1,s+1,(std::pow(std::pow(emp.first-boss.first,2)+std::pow(emp.second-boss.second,2),0.5)));
//                std::cout<<f+1<<"  "<<s+1<<" "<<(std::pow(std::pow(emp.first-boss.first,2)+std::pow(emp.second-boss.second,2),0.5))<<std::endl;
                q.push(temp);
            }
        }
        std::cin>>m;
        std::vector<edge> alreadyDone;
        for(int i = 0 ; i < m ; i++){
            int from,to;
            std::cin>>from>>to;
            edge temp(from,to,-2);
            alreadyDone.push_back(temp);
        }
        disJointSet instance(n);
        int cntEdges = 0;
        for (edge &current :alreadyDone){
            cntEdges+=instance.link(current.from,current.to);
        }
        if (cntEdges ==n-1){
            std::cout<<"No new highways need"<<std::endl;
            if (testCase) std::cout<<"\n";
            continue;
        }
        while(q.size()){
            edge temp = q.top();
            q.pop();
            bool res = instance.link(temp.from,temp.to);
            cntEdges +=res;
            if (res){
                std::cout<<temp.from<<" "<<temp.to<<std::endl;
            }
            if (cntEdges == n-1){
                if (testCase) std::cout<<"\n";
                break;
            }

        }





    }
    return 0;



}







