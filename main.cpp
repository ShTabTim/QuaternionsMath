#include <iostream>
#include "FundLibs/QuatMath/quat.h"

// RQ(a, n) - rotater quaternion on "a" radian on axis "n"
// !q - revers quaternion "q"
//s(q) - conjugate quaternion "q"

int main() {
    float a = 3.14159265 * 1.5;
    quat q(1, 2, 5), g = RQ(a, n(quat(1, 0, 0)));
    print(q);//quaternion "q"
    std::cout << "\n";
    print(s(q));//conjugate quaternion from "q"
    std::cout << "\n";
    print(!g*q*g);//Rotate quaternion "q" on "a" radian
    std::cin.get();
}