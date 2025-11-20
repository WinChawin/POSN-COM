#include <iostream>
#include <cmath>
using namespace std;

pair<double, double> factorizeQuadratic(double A, double B, double C) {
    if (A == 0) {
        if (B == 0) return {NAN, NAN};  
        double x = -C / B;
        return {x, NAN};           
    }

    double D = B * B - 4 * A * C;

    if (D < 0) return {NAN, NAN};       

    double x1 = (-B + sqrt(D)) / (2 * A);
    double x2 = (-B - sqrt(D)) / (2 * A);

    return {x1, x2};
}

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    auto roots = factorizeQuadratic(A, B, C);

    if (isnan(roots.first) && isnan(roots.second))
        cout << "ไม่มีรากจริงหรือสมการไม่ถูกต้อง\n";
    else if (isnan(roots.second))
        cout << "x = " << roots.first << endl;
    else
        cout << "x1 = " << roots.first << ", x2 = " << roots.second << endl;

    return 0;
}

