#include<iostream>
#include<cstdio>
using namespace std;
int Fib(int n) {
    if (n <= 1) {
         return n;
    }
    return (Fib n-1) +(Fib n-2);
}
int main() {
    int n;
    cout<<"Give me an n:";
    cin>>n;
    int result = Fib(n);
    cout<<result;
}