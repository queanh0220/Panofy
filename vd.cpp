#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

ll fibo (int 
a) {
    if(a == 1)return 1;
    if(a == 2) return 1;
    return fibo(a-1) + fibo(a-2);
}

main() {
    int b;
    cout<<"Enter number:";
    cin>>b;
    cout<<fibo(b);
}
