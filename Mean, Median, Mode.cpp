#include <iostream>
#include <algorithm>
using namespace std;

double mean(int a[], int n) {
    int sum = 0;
    for(int i=0;i<n;i++)
        sum += a[i];
    return (double)sum/n;
}

double median(int a[], int n) {
    sort(a, a+n);
    if(n%2==0)
        return (a[n/2] + a[n/2 -1]) / 2.0;
    else
        return a[n/2];
}

int mode(int a[], int n) {
    int maxCount=0, mode=a[0];

    for(int i=0;i<n;i++) {
        int count=0;
        for(int j=0;j<n;j++) {
            if(a[j]==a[i])
                count++;
        }
        if(count>maxCount) {
            maxCount=count;
            mode=a[i];
        }
    }
    return mode;
}

int main() {
    int a[6] = {1,2,2,3,4,2};

    cout<<"Mean = "<<mean(a,6)<<endl;
    cout<<"Median = "<<median(a,6)<<endl;
    cout<<"Mode = "<<mode(a,6)<<endl;

    return 0;
}
