#include<iostream>
using namespace std;

int main(){
    long n,m;
    cin >> n >> m;
    long int *arr=new long int[n+1]();
    for(long i=1;i<=n;i++)
        arr[i]=0;
    for(long i=0;i<m;i++){
        long a,b,k;
        cin >> a >> b >> k;
        if(b!=n){
            arr[b+1]-=k;
        }
        arr[a]+=k;
    }
   // for(long i=1;i<=n;i++)
     //   cout<<arr[i]<<endl;
    long long max=arr[1];
    long long sum=0;
    for(long i=1;i<=n;i++){
        sum+=arr[i];
        if(sum > max)
            max=sum;
    }
    cout<<max;
return 0;
}