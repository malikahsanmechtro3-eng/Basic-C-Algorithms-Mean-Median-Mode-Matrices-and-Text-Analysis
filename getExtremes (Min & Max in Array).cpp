#include <iostream>
using namespace std;

void getExtremes(float &min, float &max, float a[], int n) {
    min = max = a[0];

    for(int i = 1; i < n; i++) {
        if(a[i] < min)
            min = a[i];
        if(a[i] > max)
            max = a[i];
    }
}

int main() {
    float a[5] = {2.5, 7.1, 1.2, 9.0, 4.3};
    float min, max;

    getExtremes(min, max, a, 5);

    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;

    return 0;
}
