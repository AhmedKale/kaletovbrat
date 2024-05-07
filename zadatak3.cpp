#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int danifeb(){
    srand(time(NULL));
    int n = rand() % 29 + 1;
    return n;
}

int main(){
    srand(time(NULL));
    int n = danifeb();
    cout << "februar "<< n << "." << endl;
    if (n == 27){
        cout << "LOTOOOOO!!!!" << endl;
    }
    else{
        cout << "a pih" << endl;
    }
}
return 0;
