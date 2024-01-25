#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st1 = "Fork CPP";
    string st2 = "Online course";
    
    st1.append(st2.substr(6, 7));
    cout << st1;
    return 0;
} 