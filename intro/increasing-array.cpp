#include <iostream>
#include <cstdint>


using namespace std;

int main()
{
    int n;
    cin >> n;

    long long steps = 0;
    long long cur_max = 0;

    while(n--) {
        long long x;
        cin >> x;
        if(x >= cur_max) {
            cur_max = x;
        }            
        else {
            steps += cur_max - x;
        }
    }

    cout << steps << endl;

    return 0;
}