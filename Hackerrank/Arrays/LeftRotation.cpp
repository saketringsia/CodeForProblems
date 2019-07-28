#include<iostream>

using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    long a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    d=d%n;
    for(int i=0;i<n;i++){
        //if((i-d)!=0)
                if((i-d)>=0)
                    a[i-d] = b[i];
                else
                    a[i-d+n] = b[i];
        //else
           // a[i-d]=b[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

