using namespace std;
#include <bits/stdc++.h>

#define eps 10e-9

int n;
double a[112], b[112], asum, bsum;

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%lf", a+i);
        asum += a[i];
    }
    for(int i = 0; i < n; i++){
        scanf("%lf", b+i);
        bsum += b[i];
    }

    if(asum <= bsum-eps) printf("SUM(A)<SUM(B)\n");
    else if(asum >= bsum+eps) printf("SUM(A)>SUM(B)\n");
    else printf("SUM(A)=SUM(B)\n");
}
