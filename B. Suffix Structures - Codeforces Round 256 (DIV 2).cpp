//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
//    std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )
#include <iostream>
#include<vector>
#include<cmath>
#include<stack>
#include <iomanip>
#include <vector>
//#include<bits/stdc++.h>
//#include <bitset>
//#include<iomanip>
#include <algorithm>
//#include<queue>
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



int main(){
    std::string first;
    std::string second;
    std::cin>>first>>second;
    bool taken[first.length()] {0};
    std::vector<int>firsts;
    for (int firstletterind = 0 ; firstletterind<first.length();firstletterind++){
        if (first[firstletterind] == second[0])
            firsts.push_back(firstletterind);
    }

    for (int i = 0;i<second.length();i++){
        bool takenFlag =0;
        for (int j =0;j< first.length();j++){
                if (second[i] ==first[j] && !taken[j]){
                    taken[j]=1;
                    takenFlag=1;
                    break;
                }

        }
        if (!takenFlag){
            std::cout<<"need tree";
            return 0 ;
        }

    }

    if(first.length() == second.length()){
        std::cout<<"array";
        return 0;
    }
    else if (first.length() > second.length()){

        for (int ind =  0;ind<first.length();ind++){
            std::string sub =first.substr(ind,second.length());
            if (second == sub){
                std::cout<<"automaton";
                return 0;
            }

        }

            int beginfrom=firsts[0];
            for(int sec = 0; sec<second.length();sec++){
                bool found = 0;
                for (int fir = beginfrom ;fir<first.length();fir++){
                    if (second[sec] == first[fir] && (sec == second.length()-1)){
                        std::cout<<"automaton";
                        return 0;
                    }
                    if (second[sec] == first[fir]){
                        beginfrom = fir+1;
                        found =1;
                        break;
                    }

                }
                if (!found)
                    break;
            }

    }
    std::cout<<"both";
    return 0;


}
