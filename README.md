# MojeZadanka
oskar jemielity 15.03.2022

#include <iostream>
using namespace std;

int main()
{

    int lp = 0;
    int p = 2;
    int l;
    int d;
    bool x;
    cout << "Ile liczb chcesz wyświetlić: " << endl;
    cin >> l;

    while (lp < l) {
        x = true;
        for (int d = 2; d <= p - 1; d++) {
            if (p % d == 0) {
                x = false;
            }
        }
        if (x == true) {
            cout << p << " :Jest liczba pierwszą" << endl;
            lp = lp + 1;
        }
        p = p + 1;
    }
}                                                        
