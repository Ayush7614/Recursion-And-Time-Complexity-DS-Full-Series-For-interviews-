#include<iostream>
#include<cstdio>
using namespace std;
int Fib(int n){
    if (n<= 1){
        return n;
    }
    int F1,F2,F;
    F1 = 0;
    F2 = 1;
    for(int i = 2;i<n;i++) {
        F = F1+F2;
        F1 = F2;
        F2 = F;
    }
    return F;
}
int main() {
    int n;
    cout<<"Give me an n: ";
    cin>>n;
    int result = Fib(n);
    cout<<result;
}
