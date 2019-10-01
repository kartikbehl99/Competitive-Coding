#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        string s, c;
        cin>>s;
        cin>>c;

        int count = 0;
        sort(c.begin(), c.end());
        for(int i=0; i<s.length() - c.length() + 1; i++) {
            string temp = "";
            temp += s[i];
            for(int j=i+1; j<=i+c.length()-1; j++) {
                temp += s[j];
            }
            sort(temp.begin(), temp.end());
            if(temp == c) {
                count++;
            }
        }

        cout<<count<<endl;
    }
}