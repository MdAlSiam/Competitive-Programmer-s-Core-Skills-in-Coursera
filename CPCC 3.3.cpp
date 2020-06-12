#include <bits/stdc++.h>
using namespace std;

long long int n;
long long int ara[56];
long long int denominator, numerator;

int main(){
    scanf("%lld", &n);

    for(long long int i = 1; i <= n; i++)
        scanf("%lld", ara+i);

    long long int intsum = 0;
    for(long long int i = 1; i <= n; i++)
        intsum += ara[i];

//    denominator = 1;
//    for(long long int i = 1; i <= n; i++)
//        denominator *= ara[i];
//
//    numerator = 0;
//    for(long long int i = 1; i <= n; i++)
//        numerator += (denominator / ara[i]);

    //printf("%lld %lld %lld\n", intsum, numerator, denominator);

    double ans = intsum*1.00; // + ((numerator*1.00)/(denominator));

    for(long long int i = 1; i <= n; i++)
        ans += (1.00 / ara[i]);

    printf("%.10lf\n", ans);
}
