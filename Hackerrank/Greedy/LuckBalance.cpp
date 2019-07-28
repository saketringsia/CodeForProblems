#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k;
    cin>>n>>k;
    int a[n],imp[n];
    int x,j=0;
    long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        cin>>x;
        if(x==1)
            imp[j++]=a[i];
    }
    sort(imp,imp+j);
    for(int i=0;i<(j-k);i++)
        sum-=2*imp[i];
    cout<<sum;
    return 0;
}
