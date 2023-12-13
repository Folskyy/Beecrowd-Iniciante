#include<iostream>

using namespace std;


int main(){
    int n, t; cin >> t;
    double v[60]; v[0]=0; v[1]=1;
    for(int i=0; i<t; i++){
        cin >> n;
        for(int j=2; j<=n; j++)
            v[j]=v[j-1]+v[j-2];
        printf("Fib(%d) = %.0lf\n", n, v[n]);
    }
}

