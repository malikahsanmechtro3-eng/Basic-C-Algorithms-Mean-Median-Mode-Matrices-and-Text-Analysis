#include <iostream>
#include <cmath>
using namespace std;

double stdev(double x[], int n) {
    double sum = 0, mean, variance = 0;

    for(int i = 0; i < n; i++)
        sum += x[i];

    mean = sum / n;

    for(int i = 0; i < n; i++)
        variance += (x[i] - mean) * (x[i] - mean);

    variance /= n;

    return sqrt(variance);
}

int main() {
    double x[5] = {2,4,4,4,5};

    cout << "Standard Deviation = " << stdev(x,5);

    return 0;
}
