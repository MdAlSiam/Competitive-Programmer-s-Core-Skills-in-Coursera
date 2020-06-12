using namespace std;
#include <bits/stdc++.h>

int a, b, c;

int main(){
    scanf("%d %d", &a, &b);
    if( (a >= 0 and b >= 0) or (a < 0 and b < 0) ){
        c = a/b;
        if(b*c != a) c++;
    }
    else{
        if(b < 0) a *= -1, b *= -1;
        c = a/b;
        //if(b*c != a) c++;
        //if(c == 1 && a != 0) c = 0;
    }
    printf("%d\n", c);
}
