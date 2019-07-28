#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long n;
    cin>>n;
    long a[n];
    for(long i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    long long int min = pow(10,18);
    for(int i=0;i<n-1;i++){
        if((a[i+1]-a[i])<min)
            min = a[i+1]-a[i];
    }
    cout<<min;
    return 0;
}
