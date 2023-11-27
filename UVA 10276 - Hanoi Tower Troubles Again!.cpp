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


/*Warning It's a stupid solution though it works */

int main(){
    int testCase;
    std::cin>>testCase;
    while(testCase--){
        int n;
        std::cin>>n;
        std::pair<int,int> arr[n]{std::make_pair(0,0)}; //first is the upper one,second is the lower one
        int current = 0;
        while(++current){
            bool oldPlaced =0;
            for(int i = 0 ;i<n;i++){
                if (arr[i].second == 0 && arr[i].first != 0){
                    double num = std::sqrt(arr[i].first+current);
                    int num1 = std::sqrt(arr[i].first+current);
                    if (num == num1){
                        arr[i].second = arr[i].first;
                        arr[i].first = current;
                        oldPlaced = 1;
                        break;
                    }
                }
                else{

                    int &&num = std::pow(std::sqrt(arr[i].first + arr[i].second)+1,2);
                    int required = num -arr[i].first;
                    if (required == current){
                        arr[i].second = arr[i].first;
                        arr[i].first = current;
                        oldPlaced = 1;
                        break;
                    }
                }
            }
            bool weDoomed = 1;
            if(!oldPlaced){
                for(int i = 0 ;i<n;i++){
                    if (arr[i].first == 0 && arr[i].second == 0){
                        arr[i].first = current;
                        weDoomed = 0;
                        break;
                    }
                }
            }
            if (weDoomed &&!oldPlaced) break;
        }
    std::cout<<current-1<<std::endl;
    }
    return 0;
}













