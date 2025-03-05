#include "../../../../../PPP.h"

int main() {
    int check= 4;
    switch (check) {
    case 3:
	cout << "3!\n";
	break;
    case 4:
	cout << "4!\n";
	[[fallthrough]];
    case 5:
	cout << "5!\n";
	break;
    }
}
