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
    int from,to ,weight;
    edge(int from,int to , int weight): from(from),to(to),weight(weight){}
    bool operator < (const edge &e1)const {
        return ((this->weight) > e1.weight); // the operation require < to get the max element in the priority queue so we inversed it.
    }

};

struct disJointSet{
    int n;
    std::vector<int> parents;
    std::vector<int> ranks;
    disJointSet(int n): n(n){
        parents = std::vector<int> (n+1,-1);
        ranks = std::vector<int> (n+1,-1);
    }
    int finder(int searchfor){
        if (parents[searchfor] == -1)
            return searchfor;
        return parents[searchfor] = finder(parents[searchfor]);
    }

    bool link(int a,int b){
        a= finder(a);
        b= finder(b);
        if (a == b)
            return 0 ; //cycle
        else if (ranks[a]>ranks[b]){
            parents[b] = a;
            return 1;
        }
        else if (ranks[b] > ranks[a]){
            parents[a] = b;
            return 1;
        }
        else{
            parents[a] = b;
            ranks[b]++;
            return 1;
        }

    }

};
int main(){
    int testcases;
    std::cin>>testcases;
    while(testcases--){
        std::priority_queue<edge> data;
        std::vector<int> takenindexes;
        int n,m;
        std::cin>>n>>m;
        for(int i = 0 ; i<m ;i++){
            int a,b,c;
            std::cin>>a>>b>>c;
            edge temp(a,b,c);
            data.push(temp);
        }
        
        std::priority_queue<edge> backup= data;
        int cnt1=0;
        int edgecount = 0;
        disJointSet instance(n);
        for (int i = 0 ; i < m ;i++){

            edge currentEdge = backup.top();
            backup.pop();
            bool res = instance.link(currentEdge.from,currentEdge.to);
            edgecount+=res;
            if (res){
                cnt1+=currentEdge.weight;
                takenindexes.push_back(i);
            }

            if (edgecount == n-1)
                break;
        }
        
        int save = 4000000;
        int cnt2=0;
        for (int k = takenindexes.size()-1 ; k >=0; k--){
            disJointSet instancenew(n);
            cnt2 = 0;
            int edgecount2 = 0;
            std::vector<int> takenindexes2;
            std::priority_queue<edge> backup2 =data;
            for (int i = 0 ; i < m ;i++){
                edge currentEdge = backup2.top();
                backup2.pop();
                if (i==takenindexes[k]) continue;
                bool res = instancenew.link(currentEdge.from,currentEdge.to);
                edgecount2+=res;
                if (res){
                    cnt2+=currentEdge.weight;
                    takenindexes2.push_back(i);
                }
                if (edgecount2 == n-1){
                    break;
                }
            }
            if (cnt2<save && edgecount2 == n-1 ) save = cnt2;

        }
        std::cout<<cnt1<<" "<<save;
        std::cout<<"\n";

    }
    return 0;

}
