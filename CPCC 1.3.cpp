#include <bits/stdc++.h>
using namespace std;

string in;
int len;

int main(){
    cin >> in;
    len = in.length();

    bool allnine = true;
    for(int i = 0; i < len; i++)
        if(in[i] != '9') allnine = false;

    if(allnine) cout << ++len << endl;
    else cout << len << endl;
}
