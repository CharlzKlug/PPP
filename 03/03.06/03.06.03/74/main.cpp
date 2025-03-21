#include "../../../../PPP.h"

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
    cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
}
