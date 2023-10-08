#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    unordered_set<char> ss;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
        ss.insert(s[i]);
  
    ss.size()%2==0?cout<<"CHAT WITH HER!":cout<<"IGNORE HIM!";

    return 0;
}