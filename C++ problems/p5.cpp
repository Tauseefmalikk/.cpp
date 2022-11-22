#include <bits/stdc++.h>
using namespace std;

int main() {
    string s[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    int a, b,i;
    cin >> a >> b;
    for ( i = a; i <= b; ++i)
        if (i >= 1 and i <= 9)
            cout << s[i - 1] << endl;
        else
        {
        	 cout << (i % 2 ? "odd" : "even") << endl;
		}
           
    return 0;
}
