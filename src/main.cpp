#include <iostream>
#include <string>
#include "Automata.h"
using namespace std;

int main()
{

    Automata automat = Automata();
    
    automat.on();
    cout << automat.getState() << endl;
    automat.coin(150);

    cout << automat.getState() << endl;
    automat.coin(200);

    cout << automat.getState() << endl;
    automat.cancel();

    cout << automat.getState() << endl;
    automat.coin(0);

    cout << automat.getState() << endl;
    automat.getMenu();

    automat.choice(1);
    cout << automat.getState() << endl;

    automat.check(1);
    cout << automat.getState() << endl;

    automat.coin(50);
    cout << automat.getState() << endl;

    automat.choice(2);
    cout << automat.getState() << endl;

    automat.check(2);
    cout << automat.getState() << endl;

    automat.cook();
    cout << automat.getState() << endl;

    automat.finish();
    cout << automat.getState() << endl;
}
