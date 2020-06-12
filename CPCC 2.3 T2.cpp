#include <bits/stdc++.h>
using namespace std;

#define int long long int

#define inf INT_MAX

int ara[2048];
int tree[2048+2048+2048];
int n;

void build(int node, int b, int e){
    if(b == e){
        tree[node] = ara[b];
        return;
    }

    int mid = b + ((e-b)/2);
    int left = 2*node;
    int right = left+1;

    build(left, b, mid);
    build(right, mid+1, e);

    tree[node] = min(tree[left] , tree[right]);
}

int query(int node, int b, int e, int i, int j){

    if(j < b || e < i) return inf;

    if(i <= b && e <= j) return tree[node];

    int mid = b + ((e-b)/2);
    int left = 2*node;
    int right = left+1;

    int left_ret = query(left, b, mid, i, j);
    int right_ret = query(right, mid+1, e, i, j);

    return min(left_ret , right_ret);
}

int32_t main(){

    scanf("%lld", &n);
    for(int i = 1; i <= n; i++)
        scanf("%lld", ara+i);

    build(1, 1, n);

    int ans = 0;

//    for(int duration = 0; duration <= n-1; duration++){
//        for(int i = 1; i <= n; i++){
//            ans += query(1, 1, n, i, min(i+duration, n));
//            if(min(i+duration, n) == n) break;
//            //cout << i << " " << min(i+duration, n) << " " << query(1, 1, n, i, min(i+duration, n)) << endl;
//        }
//    }

    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            ans += query(1, 1, n, i, j);
        }
    }

    printf("%lld\n", ans);
}

