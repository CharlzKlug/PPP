#include "../../../PPP.h"

int main () {
    vector<double> temps;
    for (double temp; cin >> temp;) {
	temps.push_back(temp);
    }

    double sum= 0;
    for (double x : temps)
	sum += x;
    cout << "Average temperature: " << sum / temps.size() << '\n';

    ranges::sort(temps);
    size_t tempsSize = temps.size();
    if (0 == tempsSize) {return 0;}

    double a = temps[tempsSize / 2];
    double b = temps[(tempsSize - 1) / 2];
    cout << "Median temperature: " << (a + b) / 2 << '\n';
}
