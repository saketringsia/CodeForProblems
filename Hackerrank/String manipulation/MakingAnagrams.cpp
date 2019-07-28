#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    int x[26],y[26];
    for(int i=0;i<26;i++){
        x[i]=0;
        y[i]=0;
    }
    for(int i=0;i<a.length();i++)
        x[a[i]-'a']++;
    for(int i=0;i<b.length();i++)
        y[b[i]-'a']++;
    int sum=0;
    for(int i=0;i<26;i++){
        sum+=abs(x[i]-y[i]);
    }
    return sum;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
