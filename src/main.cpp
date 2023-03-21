// Copyright 2022 UNN-IASR
#include <iostream>
#include <string>
#include "Automata.h"

int main() {
    Automata automat = Automata();
    automat.on();
    std::cout << automat.getState() << endl;
    automat.coin(150);

    std::cout << automat.getState() << endl;
    automat.coin(200);

    std::cout << automat.getState() << endl;
    automat.cancel();

    std::cout << automat.getState() << endl;
    automat.coin(0);

    std::cout << automat.getState() << endl;
    automat.getMenu();

    automat.choice(1);
    std::cout << automat.getState() << endl;

    automat.check(1);
    std::cout << automat.getState() << endl;

    automat.coin(50);
    std::cout << automat.getState() << endl;

    automat.choice(2);
    std::cout << automat.getState() << endl;

    automat.check(2);
    std::cout << automat.getState() << endl;

    automat.cook();
    std::cout << automat.getState() << endl;

    automat.finish();
    std::cout << automat.getState() << endl;
}
