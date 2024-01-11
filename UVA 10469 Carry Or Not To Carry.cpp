//    std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )
//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
#include <iostream>
//#include<numeric>
#include<vector>
#include<cmath>
//#include<stack>
//#include <iomanip>
//#include <vector>
#include<bits/stdc++.h>
//#include <bitset>
////#include<iomanip>
#include <algorithm>
//#include<queue>
////#include<deque>
////#include<numeric>
//#include<set>
//#include<unordered_set>
//#include<map>
////#include<fstream>
////#include<sstream>
////#include <thread>
////#include <chrono>
//#include<cstring>
//#include<string>
//#include <unordered_map>
////#include<memory>
////#include <iostream>
////#include <thread>
////#include<limits>



std::string decimalToBinary(unsigned int number){
    std::string s = "";
    unsigned int base = 2;
    for(;number;number/=base){
        s = std::to_string(number%base) + s;
    }
    return s;
}
unsigned int binaryToDecimal (std::string s){
    int pow =s.size()-1;

    unsigned int base = 2, res = 0;
    for(char letter:s){
        res+= (letter - 48)*std::pow(base,pow--);
    }
    return res;

}


int main(){
    unsigned int a,b;
    while(std::cin>>a>>b)
        std::cout<<(a^b)<<'\n';
    
}















