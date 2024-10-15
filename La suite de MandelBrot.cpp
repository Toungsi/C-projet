#include <iostream>

using namespace std;

void carreComplexe(double a, double b, double &R, double &I) {
    R = a * a - b * b;
    I = 2 * a * b;
}
int main() {

    double a, b;
    double R = 0, I = 0;
    double Rt, It;
    int n;

    cout<< "Entrer la partie reelle: ";
    cin>> a;
    cout<< "Entrer la partie imaginaire: ";
    cin>> b;

    cout<< "Entrer le nombre d'iteration:";
    cin>> n;

    for (int i = 0; i < n; i++){
        carreComplexe(R, I, Rt, It);

        R = Rt + a;
        I = It + b;

        cout<< "iteration " <<i + 1<< ": z = "<< R << " + " << I << "i" << endl;

        if (R * I + Rt *It > 4){
            cout<< "La suite diverge après "<<i + 1<< "iterations."<< endl;
            break;
        }
    }

    return 0;
}
