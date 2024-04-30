#include <iostream>
using namespace std;


void pozdrav(int godine) {
    cout << "Ime: [Ahmed ]" << endl;
    cout << "Prezime: [Katica]" << endl;
    cout << "Godine: " << godine << endl;
}

int main() {
    int mojeGodine = 25; 

    pozdrav(mojeGodine);
    
    return 0;
}
