#include <iostream>
using namespace std;

class Solution {
    public:
    bool isPalindrome(int x) {
        return true;
    }
};

int main() {
    Solution solution;
    cout << solution.isPalindrome(1) << endl;
    return 0;
}

// Omit the Data Type of a Variable
// auto a = 'a';
// auto t = true;
// auto x = 1;
// auto y = 2.0;

// For loop c++ 11
// for(range_declaration : range_expression)

// Ternary
// age < 18 ? printf("A Child") : printf("An Adult");

// redefine method names in preprocessor
// #define push push_back