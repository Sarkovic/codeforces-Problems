#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, val = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        if(input[1] == '+'){
            val++;
        }
        if(input[1] == '-'){
            val--;
        }
    }
    cout << val << endl;
    return 0;
}