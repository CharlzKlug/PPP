#include "../../../PPP.h"

int main() {
    try {
        vector<int> v;
        for(int i = 0; cin>>i;)
            v.push_back(i);
        for(size_t i=0; i <= v.size(); ++i)
            cout << "v[" << i << "] == " << v[i] << '\n';
    } catch(out_of_range) {
        cerr << "Oops! Range error\n";
        return 1;
    } catch(...) {
        cerr << "Exception: something went wrong\n";
        return 2;
    }
}
