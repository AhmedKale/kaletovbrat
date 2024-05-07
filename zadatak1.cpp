#include<iostream>
#include<cstdlib>

using namespace std;


bool par(int x){
    bool par = false;
    if (x % 2 == 0){
        par = true;
    }
    return par;
}

int main(){
    int n;
    cin >> n;
    if (par(n)){
        cout << "Broj je paran" << endl;
    }
    else{
        cout << "Neparan je" << endl;
    }

    return 0;
}
