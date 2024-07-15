#include <iostream>
#include <cstdint>
#include <set>

using namespace std;

/*

You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
Output
Print the missing number.
Constraints

2 <= n <= 2 * 10^5

Example
Input:
5
2 3 1 5

Output:
4
    
    
ANSWER:
Some other approaches : 
1. Sum of all n natural numbers - the sum of the array elements.
2. Xor of all n natural numbers XOR'd with Xor of all the array elements.
3. Using a hash table.
*/

int main1()
{
    int t;
    cin >> t;

    set<int> nums;
    for(int i = 1; i <= t; i++)
        nums.emplace(i);

    t--;
    while(t--) {
        int n;
        cin >> n;
        nums.erase(n);
    }
    
    cout << *nums.begin() << endl;

    return 0;
}


int main2()
{
    int t;
    cin >> t;

    set<int> nums;
    for(int i = 1; i <= t; i++)
        nums.emplace(i);

    t--;
    while(t--) {
        int n;
        cin >> n;
        nums.erase(n);
    }
    
    cout << *nums.begin() << endl;

    return 0;
}