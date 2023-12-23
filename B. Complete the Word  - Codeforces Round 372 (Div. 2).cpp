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
    std::string word;
    bool found = 0;
    std::cin>>word;

    for(int i= 0 ;i<word.length();i++){
        std::string temp = word.substr(i,26);
        bool visited[26] {0};
        std::vector<int>questionMarkIndexes;
        for (int j = 0 ;j<temp.length();j++){
            if (temp[j] == '?')
                questionMarkIndexes.push_back(i+j);
            else
                visited[temp[j]-65] = 1;
        }
        int sum=0;
        int existCnt = std::accumulate(visited,visited+26,sum);
        int emptyPlaces = (int)questionMarkIndexes.size();
        if ((26-existCnt)==emptyPlaces){
            for (int workLetter = 0 ; workLetter<26;workLetter++){
                if(visited[workLetter]==0){
                    word[questionMarkIndexes[questionMarkIndexes.size()-1]] = (char)workLetter+65;
                    questionMarkIndexes.pop_back();

                }
            }
            found=1;
            break;
        }


    }
    if (found){
        for (auto &l:word){
            if(l =='?')
                l='L';
        }
        std::cout<<word;
        return 0;
    }
    std::cout<<-1;
    return 0;

}
