#include<iostream>
using namespace std;

template<typename T>
struct Pair{
    T x, y;
    Pair(T a, T b){
        x=a;
        y=b;
    }
    T getFirst(){
        return x;
    }
    T getSecond(){
        return y;
    }
};

int main(){
    Pair<int> p(2,3);
    int a = p.getFirst();
    int b = p.getSecond();
    cout<<a<<" "<<b<<endl;
    return 0;
}