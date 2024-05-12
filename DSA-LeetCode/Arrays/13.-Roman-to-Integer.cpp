#include <bits/stdc++.h>
using namespace std;

int value(char r) {
    if (r == 'I') return 1;
    if (r == 'V') return 5;
    if (r == 'X') return 10;
    if (r == 'L') return 50;
    if (r == 'C') return 100;
    if (r == 'D') return 500;
    if (r == 'M') return 1000;
    return -1;
}

void  romanToDecimal(string& str) {
    int res = 0;
    for (int i = 0; i < str.length(); i++) {
       if(value(str[i]<value(str[i+1])))
       {
        res-=value(str[i]);
        cout<<"res="<<res<<"  -> "<<endl;
       }
        else {
            res +=value(str[i]);
        }
    }
   // return res;
}

int main() {
    string str = "LVIII";
     romanToDecimal(str);
    return 0;
}
