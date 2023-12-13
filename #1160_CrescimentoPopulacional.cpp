#include<iostream>

using namespace std;

int main(){
    int n; cin >> n;
    double ca, cb;
    int tempo, pa, pb;

    for(int i=0; i<n; i++){
        cin >> pa >> pb >> ca >> cb;
        ca/=100; cb/=100;
        tempo=0;
        while(1){
            if(tempo>100){
                cout << "Mais de 1 seculo." << endl;
                break;
            }
            else if(pa>pb){
                cout << tempo << " anos." << endl;
                break;
            }
            pa+=pa*ca;
            pb+=pb*cb;
            tempo++;
        }
    }
}

