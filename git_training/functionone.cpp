#include <iostream>
using namespace std;

double my_plus(double a, double b);
double my_minus(double a, double b);

int main(){
    double n1;
    double n2;
    char c;
    scanf("%lf %c %lf", &n1, &c, &n2);
    if(c == '+'){
        double d1 = my_plus(n1, n2);
        cout << d1;
    }
    if(c == '-'){
        double d2 = my_minus(n1, n2);
        cout << d2;
    }
    return 0;
}

double my_plus(double a, double b){
    return a + b;
}

double my_minus(double a, double b){
    return a - b;
}
