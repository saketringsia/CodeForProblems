#include <bits/stdc++.h>

using namespace std;

int alternatingCharacters(string s){
    // Complete this function
    int c=0;
    for(int i=0;i<s.length()-1;i++){
        if(s.at(i)==s.at(i+1))
        {
           
            c++;
            
        }
    }
    return c;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = alternatingCharacters(s);
        cout << result << endl;
    }
    return 0;
}
