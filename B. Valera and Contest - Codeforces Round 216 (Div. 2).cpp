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
    int  n,k,l,r,sall,sk;
    std::cin>>n>>k>>l>>r>>sall>>sk;
    int members[n]{0};
    int restScore =sall - sk;
    int restMembers = n-k;
    for(int i = 0 ; i<k ;i++)
        members[i] = sk/k;
    for (int i=0 ; i<(sk%k);i++)
        members[i] +=1;
    for(int i =k; i<n;i++)
        members[i] =restScore/restMembers;
    if (restMembers == 0) restMembers=1000090;
    for (int i =0 ; i<(restScore%restMembers);i++)
        members[k+i]+=1;
    for (int mem = 0 ; mem<n;mem++)
        std::cout<<members[mem]<<" ";

}
