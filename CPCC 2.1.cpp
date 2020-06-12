using namespace std;
#include <bits/stdc++.h>

int cost = (1 << 30);
int ans[9];
int init[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int grid[9][9];

void update_cost(int last){
    int cost_here = 0;
    for(int i = 1; i <= last; i++)
        cost_here += grid[init[i-1]-1][init[i]-1];

    if(cost_here < cost){
        cost = cost_here;
        for(int i = 0; i <= last; i++)
            ans[i] = init[i];
    }
}

void permutation(int lo, int hi){

    if(lo == hi){
//        for(int i = 0; i <= hi; i++)
//            printf(i == hi ? "%d\n" : "%d ", init[i]);
        update_cost(hi);
        return;
    }

    for(int i = lo; i <= hi; i++){
        swap(init[lo], init[i]);
        permutation(lo+1, hi);
        swap(init[lo], init[i]);//backtrack
    }
}

int main(){

    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &grid[i][j]);

    for(int i = 0; i < n; i++)
        init[i] = i+1;

    permutation(0, n-1);

    for(int i = 0; i < n; i++)
        printf(i == n-1 ? "%d\n" : "%d ", ans[i]);
}

