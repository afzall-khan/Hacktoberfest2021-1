// A Simple C++ program to reverse a string

//Output : skeegrofskeeg

// Complexity : O(n)


#include <bits/stdc++.h>
using namespace std;
// reverse function
 void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main()
{
    string str = "geeksforgeeks";
    reverseStr(str);
    cout << str;
    return 0;
}