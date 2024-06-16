#include<iostream>
using namespace std;

class complex{
    private:
    int x, y;
    public:
    complex(int a, int b){
        x=a;
        y=b;
    }
    void print(){
        cout<<x<<"+"<<y<<"i"<<endl;
    }
};

int main(){
    complex c(10,20);
    c.print();
}