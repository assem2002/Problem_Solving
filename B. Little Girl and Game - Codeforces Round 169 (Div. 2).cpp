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
int main(){
    int lettersCount[123]{0};
    int isOdd= 0;
    std::string a;
    std::cin>>a;
    for (char &letter :a) lettersCount[(int)letter]++;
    for (int i= 0 ; i<123 ;i++) if (lettersCount[i]%2) isOdd++;
    isOdd--;
    if (isOdd < 0) isOdd=0;
    (isOdd%2)?std::cout<<"Second":std::cout<<"First";
}








