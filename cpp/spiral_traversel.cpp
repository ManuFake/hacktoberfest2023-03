#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> spirallyTraverse(vector<vector<int>> m, int r, int c)
{
    // code here
    vector<int> res;

    int row = 0;
    int col = 0;
    int right = c - 1;
    int down = r - 1;
    int left = 0;
    int up = 0;
    // row const and col increament
    while (col < c)
    {
        res.push_back(m[row][col++]);
    }
    row += 1;
    while (row < r)
    {
    }
}
int main()
{
    cout << "Spiral traversal on a Matrix" << endl;
    vector<vector<int>> m{{1, 2, 3, 4},
                          {5, 6, 7, 8},
                          {9, 10, 11, 12},
                          {13, 14, 15, 16}};

    return 0;
}
