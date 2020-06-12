#include <bits/stdc++.h>
using namespace std;

int n;
int ara[112];
int toavoid;
int kount;

int main(){

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", ara+i);

    int maxi = -1;
    for(int i = 0; i < n; i++)
        if(ara[i] > maxi)
            maxi = ara[i];

    kount = 0;
    for(int i = 0; i < n; i++){
        if(ara[i] == maxi){
            kount++;
            if(kount <= 3) toavoid = i;
        }
    }

    for(int i = 0; i < n; i++){
        if(i == toavoid) continue;
        printf("%d ", ara[i]);
    }
    printf("\n");

}
