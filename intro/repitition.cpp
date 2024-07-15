#include <iostream>
#include <cstdint>


using namespace std;

int main()
{
    string str;
    cin >> str;

    int cur_len = 0;
    char prev = ' ';
    int max_len = 0;

    for(auto a : str) {
        if(a == prev) {
            cur_len++;            
        } else {
            cur_len = 1;
            prev = a;
        }
        max_len = max(max_len, cur_len);        
    }    

    cout << max_len;

    return 0;
}