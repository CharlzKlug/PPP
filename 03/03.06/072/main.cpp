#include "../../../PPP.h"

int main() {
    vector<int> v= {5, 7, 9, 4, 6, 8};
    vector<string> philosopher= {"Kant", "Plato", "Hume", "Kierkegaard"};
    philosopher[2]= 99;
    cout << philosopher[2] << '\n';
    vector<int> vi(6);
    vector<string> vs(4);
    cout << vi[20000] << '\n';
    return (0);
}
