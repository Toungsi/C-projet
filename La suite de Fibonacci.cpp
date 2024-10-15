#include <iostream>

using namespace std;
int main() {
    int n;
    cout<< "Entrer la nombre de termes : ";
    cin >>n;

    if (n == 0){
        cout<< "f(0) = 0" << endl;
    } else if (n == 1){
        cout<< "f(0) = 0" << endl;
        cout<< "f(1) = 1" <<endl;
    }
    else{
        size_t a = 0;
        size_t b = 1;
        size_t f;

        for (int i = 2; i <= n; i++){
            f = a + b;
            a = b;
            b = f;
            cout<< "f(" <<i<< ") = " << b << endl;
        }
    }
}
