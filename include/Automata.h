// Copyright 2023 UNN-IASR
#include <iostream>
#include <string>
#include <vector>

enum STATES { OFF, WAIT, ACCEPT, CHECK, COOK };

class Automata {
 private:
        int cash;
        std::vector<std::string> menu;
        std::vector<int> prices;
        STATES state;
 public:
        Automata();
        void on();
        void off();
        void coin(int money);
        std::string getMenu();
        STATES getState();
        void choice(int choice);
        bool check(int choice);
        void cancel();
        void cook();
        void finish();
};
