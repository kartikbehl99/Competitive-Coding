#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        char curr = 'p', prev;
        map<char, int> m;
        int length;

        cin>>length;
        string s;
        cin>>s;
        for(int i=0; i<2*length; i++) {
            if(s[i] == 'i') {
                m[s[i+1]]++;
                i++;
            }
        }
        for(int i=0; i<2*length; i++) {
            if(s[i] == 'f') {
                if(m[s[i+1]]) {
                    cout<<m[s[i+1]];
                }
                else {
                    cout<<"NOT PRESENT";
                }
                i++;
            }
        }
    }
}