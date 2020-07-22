/*
		Author : Durga Prasad Vasiboina

		Language : C++ 

		Editor : Sublime Text Editor 3
*/


#include <iostream>
#include <map>
#include <string>
#include <iterator>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int j = 0; j < t; j++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int>frequency;
        for(int i = 0; i < n; i++){
            frequency[s[i]]++;
        }
        string ans = "YES";
        map<char, int>::iterator it;
        for(it = frequency.begin(); it!= frequency.end();it++){
            if(it->second % 2 != 0)
                ans = "NO";
        }
        cout << ans <<'\n';
    }
    
    
    
    return 0;
} 