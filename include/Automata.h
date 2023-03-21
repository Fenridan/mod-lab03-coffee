#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum STATES { OFF, WAIT, ACCEPT, CHECK, COOK };

class Automata {
private:
	int cash;
	vector<string> menu;
	vector<int> prices;
	STATES state;
public:
	Automata();
	void on();
	void off();
	void coin(int money);
	string getMenu();
	STATES getState();
	void choice(int choice);
	bool check(int choice);
	void cancel();
	void cook();
	void finish();
};
