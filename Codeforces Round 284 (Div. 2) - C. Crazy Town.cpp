//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
//std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )

#include <iostream>
//#include<numeric>
//#include<vector>
//#include<cmath>
//#include<stack>
//#include <iomanip>
//#include <vector>
#include<bits/stdc++.h>
//#include <bitset>
////#include<iomanip>
//#include <algorithm>
//#include<queue>
////#include<deque>
////#include<numeric>
//#include<set>
//#include<unordered_set>
//#include<map>
////#include<fstream>
//#include<sstream>
////#include <thread>
////#include <chrono>
//#include<cstring>
//#include<string>
//#include <unordered_map>
////#include <thread>
////#include<limits>+++

using namespace std;

struct line_eq{
    long double  a,b,c;
    line_eq(long double a,long double b, long double c):a(a),b(b),c(c){}
};

line_eq* main_points;
long double a1,b1;
long double a2,b2;
long double  xr,xl,yr,yl;
void create_eq(){
    double long m=0;
    if (a1 == a2){

    main_points = new line_eq(1,0, -1*a1);
    }
    else{

        m = ((b2-b1)/(a2 - a1));
        main_points = new line_eq(-m,1, -(b1 - (m*a1)));
    }

}
bool is_intersection(long double a,long double b,long double c){
    line_eq &current1 = *main_points;
    long double  first_up = (current1.b * c) - (b * current1.c) ;
    long double first_down = (current1.a * b) - (a * current1.b) ;
    long double second_up = (current1.c * a) - (c * current1.a) ;
    long double second_down = (current1.a * b) - (a * current1.b) ;
    if( (current1.b ==0 && b==0) || a/b ==  current1.a/current1.b ) return false;
//    if(  (-1*(a/b)*-1*(current1.a/current1.b)) ==-1) return true;
//    if(a*current1.a ==-1) return true;
    long double x = (long double )first_up/(long double )first_down;
    long double y = (long double ) second_up /(long double )second_down;
    cout<<"Here is x and y :"<<x<<" "<<y<<"\n";
    if(x<=xr && x>=xl && y<=yr && y>=yl){
        cout<<"\ndone\n";
        return true;
    }
    return false;



}

int main(){
    cin>>a1>>b1;
    cin>>a2>>b2;
    create_eq();
    cout<<main_points->a<<" "<<main_points->b<<" "<<main_points->c<<"\n";
    xr =max(a1,a2);
    xl =min(a1,a2);
    yr =max(b1,b2);
    yl =min(b1,b2);
    cout<<xr<<" "<<xl<<" "<<yr<<" "<<yl<<"\n";

    int n;
    cin>>n;
    int counter=0;
    for(int i=0;i<n;i++){
        long double a,b,c;
        cin>>a>>b>>c;
        counter+=is_intersection(a,b,c);
    }
    cout<<counter;






    return 0;
}



