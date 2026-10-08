#include <iostream>
using namespace std;
double multiple(double a, double b);
double division(double a, double b);
int main(){
    double n1;
    double n2;
    char c;
    scanf("%lf%c%lf", &n1, &c, &n2);
    if(c == '*'){
        double d1 = multiple(n1, n2);
        cout << d1;
    }
    if(c == '/'){
        double d2 = division(n1, n2);
        cout << d2;
    }
    return 0;
}

double multiple(double a, double b){
    return a * b;
}

double division(double a, double b){
    return a / b;
}