#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long long numReverse=0, num, numbero = x;
        while(numbero > 0){
            num = numbero%10;
            numReverse = numReverse*10 + num;
            numbero = numbero/10;
        }
        return numReverse == x;
    }
};

//https://leetcode.com/problems/palindrome-number/