#include "PPP.h"

int main() {
    double d= 0;
    int x0= 7.8;
    int x1 {7.8};
    int x2 = {7.8};
    int x3 (7.8);

    int x= 7;
    double d= 7.7;
    string s= "Hello, World\n";
    vector v= {1, 2, 3, 5, 8};
    pair p {"Hello", 17};
    while (cin >> d) {
	int i= d;
	char c= i;
	cout << "d== " << d
	     << " i==" << i
	     << " c==" << c
	     << " char(" << c << ")\n";
    }
}
