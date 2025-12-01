#include <iostream>
#include <cstdint>


using namespace std;

int main()
{
    int n;
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n;

    if(n == 1) {
        cout << n;
    }
    else if(n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;        
    }     
    else {
        for(int i = 2; i <= n; i += 2)
            cout << i << " ";
        for(int i = 1; i <= n; i += 2)
            cout << i << " ";                
    }   

    return 0;
}