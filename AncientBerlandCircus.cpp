#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double eps = 1e-4;

double gcd(double a, double b){
    while(fabs(a) > eps && fabs(b) > eps){
        if(a > b) 
            a -= floor(a/b) * b;
        else
            b -= floor(b/a) * a;
    }
    return a+b;
}

int main(){
    double a_x, a_y;
    double b_x, b_y;
    double c_x, c_y;

    cin >> a_x >> a_y >> b_x >> b_y >> c_x >> c_y;

    double a = sqrt(pow(a_x - b_x, 2) + pow(a_y - b_y,2));
    double b = sqrt(pow(c_x - b_x, 2) + pow(c_y - b_y,2));
    double c = sqrt(pow(a_x - c_x, 2) + pow(a_y - c_y,2));

    double p = (a + b + c) / 2.0;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));

    double r = a * b * c / 4.0 / s;

    double A = acos((b*b+c*c-a*a)/(2*b*c));
    double B = acos((a*a+c*c-b*b)/(2*a*c));
    double C = acos((b*b+a*a-c*c)/(2*b*a));

    double PI = acos(-1);

    double n = PI /gcd(gcd(A,B),C);


    cout << fixed << setprecision(6);
    cout <<  (n/2 *r *r * sin(2*PI/n));

    return 0;

}