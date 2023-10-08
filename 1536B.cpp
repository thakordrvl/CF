#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {

   long n; cin >> n;
        string s; cin >> s;

        bool done(false);
        for(char p = 'a'; p <= 'z'; p++){
            std::string t = std::string(1, p);
            if(s.find(t) == std::string::npos){std::cout << t << std::endl; done = true; break;}
        }

        for(char p = 'a'; p <= 'z'; p++){
            if(done){break;}
            for(char q = 'a'; q <= 'z'; q++){
                std::string t = std::string(1, p); t.push_back(q);
                if(s.find(t) == std::string::npos){std::cout << t << std::endl; done = true; break;}
            }
        }

        for(char p = 'a'; p <= 'z'; p++){
            if(done){break;}
            for(char q = 'a'; q <= 'z'; q++){
                if(done){break;}
                for(char r = 'a'; r <= 'z'; r++){
                    std::string t = std::string(1, p); t.push_back(q); t.push_back(r);
                    if(s.find(t) == std::string::npos){std::cout << t << std::endl; done = true; break;}
                }
            }
        }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}