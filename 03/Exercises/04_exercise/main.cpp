#include "../../../PPP.h"

int main() {
    double tmpVariable;
    vector<double> series = {};
    double totalDistance = 0;
    double smallestDistance;
    double greatestDistance;
    bool firstRun = true;
    while (cin >> tmpVariable) {
	if (!firstRun) {
	    if (smallestDistance > tmpVariable) {
		smallestDistance = tmpVariable;
	    }
	    if (greatestDistance < tmpVariable) {
		greatestDistance = tmpVariable;
	    }
	} else {
	    smallestDistance = tmpVariable;
	    greatestDistance = tmpVariable;
	    firstRun = false;
	}
	series.push_back(tmpVariable);
	totalDistance += tmpVariable;
    }
    cout << "Total distance: " << totalDistance << '\n';
    cout << "Smallest distance: " << smallestDistance << '\n';
    cout << "Greatest distance: " << greatestDistance << '\n';
    double meanDistance = totalDistance / series.size();
    cout << "Mean distance: " << meanDistance << '\n';
}
