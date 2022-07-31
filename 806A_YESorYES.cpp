#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    string str;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> str;
        if(str == "yes" || str == "YES" || str == "yES" || str == "yeS" || str == "Yes" || str == "yEs" || str == "YeS" || str == "YEs")
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    
    return 0;
}