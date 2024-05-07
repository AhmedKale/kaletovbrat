#include<iostream>

using namespace std;

int zbircifara(int x){
    int zbir = 0;
    while(x != 0){
        zbir += x % 10;
        x /= 10;
    }
    return zbir;
}

int main(){
    int n;
    cin >> n;
    cout << "zbir cifara :" << zbircifara(n) << endl;
    retun 0;
}
