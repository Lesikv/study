#include <iostream>
#include <cmath>

using namespace std;

int main() {

    for (int x = 0; x < 25; x ++) {
        for (int y = 0; y < 25; y ++) {
// 1
//            cout << (x < y ? "#" : ".");
// 2
//            cout << (x == y ? "#" : ".");
// 3
//            cout << (x == 24 - y ? "#" : ".");
// 4
//            cout << (x + y < 30 ? "#" : ".");
// 5
//            cout << (floor(x / 2) == y ? "#" : ".");
// 6
//            cout << (x < 10 || y < 10 ? "#" : ".");
// 7
//            cout << (x < 10 || y < 10 ? "." : "#");
// 8
//            cout << (x == 0 || y == 0? "#" : ".");
// 9
//            cout << (abs(x - y) > 10 ? "#" : ".");
// 10
//            cout << (x <= y - 1 && x >= 0.5 * y - 1 ? "#" : ".");
// 11
//            cout << (x == 1 || y == 1 || x == 23 || y == 23 ? "#" : ".");
// 12
//            cout << (pow(x,2) + pow(y, 2) <= 500 ? "#" : ".");
// 13
//            cout << (y + x >= 20 && x + y <= 28 ? "#" : ".");
// 15
//            cout << ((x >= y + 10 && x <= y + 20) ||  (x <= y - 10 && x >= y - 20) ? "#" : ".");
// 16
//            cout << ( abs(x - 12) + abs(y - 12) < 10   ? "#" : ".");
// 17
              cout << ( (sin(y/3.0) <= x / 8.0 - 2)   ? "# " : ". ");
// 19
//            cout << ( x == 0 || y == 0 || x == 24 || y == 24   ? "#" : ".");
// 24
//            cout << ( (x + y == 24) || x == y  ? "#" : ".");
// 25
            // cout << ( x % 6 == 0 || y % 6 == 0 ?   "#" : ".");
        }
        cout << "\n";
    }
}
