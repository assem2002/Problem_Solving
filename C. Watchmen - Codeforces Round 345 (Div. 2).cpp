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

//Stupid Solution though it's not memory hungry so congrats for me ;)
int main(){

    int n;
    std::cin>>n;
    int temp1,temp2;
    std::vector<std::pair<int,int>> data;
    std::vector<int> dataY;
    while(n--){
        std::cin>>temp1>>temp2;
        data.push_back(std::make_pair(temp1,temp2));
        dataY.push_back(temp2);
    }
    std::sort(data.begin(),data.end());
    std::sort(dataY.begin(),dataY.end());

    long long toDelete = 0;
    int ind =1;
    long long howmany=1;
    std::pair<int,int> currentPosition = data[0];

    while(true){
        if (ind ==data.size()){
           toDelete+= ((howmany*(howmany-1))/2);
           break;
        }
        if (data[ind++] == currentPosition){
            howmany++;
        }
        else{
            currentPosition=data[ind-1];
            toDelete+= ((howmany*(howmany-1))/2);
            howmany=1;
        }
    }

    long long res =0;
    long long currentTotal =1;
    int currentPositionX=data[0].first;

    for(int x = 1; x<data.size() ;x++){
        if (data[x].first == currentPositionX){
            currentTotal++;
        }
        else{
            res+=((currentTotal*(currentTotal-1))/2);
            currentPositionX =data[x].first;
            currentTotal=1;
        }
    }
    res+=((currentTotal*(currentTotal-1))/2);
    currentPositionX=dataY[0];
    currentTotal =1;
    for(int x = 1; x<data.size() ;x++){
        if (dataY[x] == currentPositionX){
            currentTotal++;
        }
        else{
            res+=((currentTotal*(currentTotal-1))/2);
            currentPositionX =dataY[x];
            currentTotal=1;
        }
    }
    res+=((currentTotal*(currentTotal-1))/2);

    std::cout<<res-toDelete;



}














