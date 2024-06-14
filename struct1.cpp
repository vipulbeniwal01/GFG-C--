#include<iostream>
using namespace std;

struct point{
    int x;
    int y;
    point(int a, int b){
        x=a;
        y=b;
    }
    void print(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    point p(10,20);
    p.print();
}