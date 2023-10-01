// This code is for finding the largest element in an array
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int getLargest(vector<int> &arr)
  {
    int n = arr.size();
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] >= maxi)
      {
        maxi = arr[i];
      }
    }
    return maxi;
  }
};

int main()
{
  vector<int> arr = {8, 12, 87, 2, 1, 98, 76, 10};
  Solution s;
  cout << "The largest element in the array is " << s.getLargest(arr) << endl;
}