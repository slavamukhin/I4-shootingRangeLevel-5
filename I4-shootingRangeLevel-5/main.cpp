#include <iostream>

using namespace std;

int main()
{
    int x, y;
    bool area1, area2;
    cin >> x >> y;
    area1 = x >= -1 && x <= 2 && y >= 3 && y <= 4;
    area2 = x >= 1 && x <= 4 && y >= 2 && y <= 7;

    if (area1 || area2) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
