#include <bits/stdc++.h>
using namespace std;

void func1(int &a,int b){
    a += 10;
    cout << a << " " << b;
}

int main() {
    // Functions

    int a = 10 ;
    int b = 20;

    func1(a, b);

    cout << a;
}