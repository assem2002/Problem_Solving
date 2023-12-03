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
    int t;
    std::cin>>t;
    while(t--){
        long long totalEarned =0,p,n,l,t;
        std::cin>>n>>p>>l>>t;
        int tasksAvailable = n/7 + ((n%7)>0);
        int tasksPacks = tasksAvailable/2;
        int tasksReminded = tasksAvailable%2;
        long long neededPacks = p/((2*t)+l) + ((p%((2*t)+l))>0);
        int days=0;
        if (neededPacks <= tasksPacks){
            std::cout<<n-neededPacks<<std::endl;

        }

        else{
            totalEarned = tasksPacks*((2*t)+l);
            days += tasksPacks;
            totalEarned+=(tasksReminded*t)+l;
            days++;
            if (totalEarned >=p){
                std::cout<<n-days<<std::endl;
            }
            else{

                std::cout<<n-(days+ ((p-totalEarned)/l) + ((p-totalEarned)%l>0))<<std::endl;
            }
        }


    }
}













