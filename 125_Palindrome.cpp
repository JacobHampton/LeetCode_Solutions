#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
    auto it = std::remove_if(s.begin(), s.end(), [](char const &c) {
        return !std::isalnum(c);
    });
 
    s.erase(it, s.end());
    remove(s.begin(), s.end(), ' ');
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int left = 0;
    int right = s.length() - 1;
    bool valid = true;
    while (left <= right)
    {
        if (s[left] != s[right])
            valid = false;
        right--;
        left++;
        }
        return valid;
    }
};

int main(){

    return 0;
}
