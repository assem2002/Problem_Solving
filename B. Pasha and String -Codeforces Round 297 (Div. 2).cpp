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
//#include<unordered_set>
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
#include <atomic>


std::string word;

int main() {
    std::cin>>word;
    int sizeOfString = (int)word.size();
    int m;
    std::cin>>m;
    int howmanytimes[int(sizeOfString/2)+1]{0};
    while(m--){
        int temp;
        std::cin>>temp;
        howmanytimes[temp]+=1;
    }
    int current = 0;
    for(int i=0 ; i<(int(sizeOfString/2)+1);i++){
        if (!howmanytimes[i]) continue;
        else if (howmanytimes[i]%2==1 &&current%2==0){
            int j =i ;
            current++;
            while(true){
                std::swap(word[j-1],word[sizeOfString-j]);
                if (j>=(int(sizeOfString/2))) break;
                if(howmanytimes[++j]%2==0) continue;
                else break;
            }
        }
        else if(howmanytimes[i]%2==1) current++;
    }
    std::cout<<word;
}














