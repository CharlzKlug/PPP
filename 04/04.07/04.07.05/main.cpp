#include "../../../PPP.h"
// #include <locale>
// #include <utility>

vector<pair<string, int>> generate(int n) {
    vector<pair<string, int>> res;
    for(int i = 0; i < n; ++i)
        res.push_back({random_letters(4, 24), random_int(1'000'000)});
    return res;
}

int main() {
    std::default_random_engine engine;
    uniform_int_distribution<int> dist(1, 6);
    for(int i=0; i<10; ++i)
        cout << dist(engine) << ' ';
    cout << '\n';
    cout << random_int(0, 1) << "\n";
    cout << random_int(0, 1) << "\n";
    cout << random_int(0, 1) << "\n";
    cout << random_int(0, 1) << "\n";
    cout << random_int(6) << "\n";
    for(int i=0; i<10; ++i)
        cout << random_int(1, 6) << ' ';
    cout << '\n';
    cout << random_letters(2, 10) << '\n';
    vector<pair<string, int>> myVect = generate(10);
    for(auto i: myVect) {
        cout << std::get<string>(i) << ' ' << std::get<int>(i) << '\n';
    }
}
