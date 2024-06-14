#include<iostream>
using namespace std;

struct point{
    int x;
    int y;
};

int main(){
    point p = {10,20};
    point *x = &p;
    cout<<(x->x)<<endl;
    x->x = 30;
    cout<<p.x<<endl;
}