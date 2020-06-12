#include <bits/stdc++.h>
using namespace std;

#define inf 2000

int x, y, z;
int ans1, ans2, ans;

int main(){
    cin >> x >> y >> z;
    int inc = x-y;

    ans1 = ans2 = -1;
    ans = inf;

    if(z == 0){
        cout << 0 << endl;
        return 0;
    }

    if(inc == 0){
        if(z == x) cout<< 1 << endl;
        else cout<< -1 << endl;
        return 0;
    }

    if( abs(z) % (abs(inc))  == 0 ){
        ans1 = z / inc;
        ans1 *= 2;
    }
    if( abs(z-x) % (abs(inc))  == 0 ){
        ans2 = (z-x) / inc;
        ans2 *= 2;
        ans2 += 1;
    }

    if(ans1 >= 0) ans = min(ans, ans1);
    if(ans2 >= 0) ans = min(ans, ans2);
    if(ans == inf) ans = -1;

    printf("%d\n", ans);

}

