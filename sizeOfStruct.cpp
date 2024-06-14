#include<iostream>
using namespace std;

struct point{
    double b;
    char a;
    char c; //use alignment memory
};

int main(){
    cout<<sizeof(point)<<endl;
}