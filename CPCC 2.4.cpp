#include <bits/stdc++.h>
using namespace std;

#define int long long int

char in[55500];
int len, num, ans;
bool toplus;

int32_t main(){
    scanf(" %s", in);
    len = strlen(in);
    in[len] = '+';

    ans = 0;
    num = 0;
    toplus = true;

    for(int i = 0; i <= len; i++){
        if(in[i] == '+' or in[i] == '-'){
            if(toplus) ans += num;
            else ans -= num;

            if(in[i] == '+') toplus = true;
            else toplus = false;

            num = 0;
        }
        else{
            num *= 10;
            num += (in[i] - '0');
        }
    }

    printf("%lld\n", ans);
}
