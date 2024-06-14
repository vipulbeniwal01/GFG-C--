#include<iostream>
using namespace std;

struct point{
    int n;
};

struct derived: point{};

int main(){
    derived x;
    x.n = 10;
    cout<<x.n<<endl;
    return 0;
}