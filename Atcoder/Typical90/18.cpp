#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

typedef long long ll;

const double PI = acos(-1.0);

int main() {

    cout << fixed << setprecision(12);
    int T, L;
    double X, Y;
    cin >> T >> L >> X >> Y;

    int Q;
    cin >> Q;

    for(int i = 0; i < Q; ++i) {
        double E;
        cin >> E;

        double ty = - L / 2.0 * sin(E / T * PI * 2.0);
        double tz = L / 2.0 - L / 2.0 * cos(E / T * PI * 2.0);

        double d = sqrt(X * X + (Y - ty) * (Y - ty));

        cout << atan2(tz, d) * 180 / PI << endl;
    }
}