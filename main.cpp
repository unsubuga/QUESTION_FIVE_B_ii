#include <iostream>
using namespace std;

int main() {
    cout<< "Below are the multiples of 3 from 1 to 20" <<endl;
    for (int i = 1; i <= 20; ++i) {
        if (i % 3 == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
