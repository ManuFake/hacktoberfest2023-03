#include <iostream>
#include <vector>
using namespace std;
void merge2vect(vector<int> &A, vector<int> &B)
{
    vector<int> C;
    int i, j, k;
    i = j = k = 0;
    while (i < A.size() && j < B.size())
    {
        if (A[i] < B[j])
        {
            C.push_back(A[i]);
            k++;
            i++;
        }
        else
        {
            C.push_back(B[j]);
            k++;
            j++;
        }
    }
    for (; i < A.size(); i++)
    {
        C.push_back(A[i]);
        k++;
    }
    for (; j < B.size(); j++)
    {
        C.push_back(B[j]);
        k++;
    }
    for (auto it : C)
        cout << it << endl;
}

void merge(vector<int> &A, int l, int mid, int h)
{
    vector<int> C;
    int i, j;
    i = l;
    j = mid + 1; // mid
    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
        {
            C.push_back(A[i]);
            i++;
        }
        else
        {
            C.push_back(A[j]);
            j++;
        }
    }
    for (; i <= mid; i++)
    {
        C.push_back(A[i]);
    }
    for (; j <= h; j++)
    {
        C.push_back(A[j]);
    }
    for (int i = l , j = 0; i <= h; i++, j++)
        A[i] = C[j];
}

void mergeSort(vector<int> &A)
{

    int pass;
    int l, h, mid;
    for (pass = 2; pass <= A.size(); pass = pass * 2)
    {

        for (int i = 0; i + pass - 1 < A.size(); i = pass + i)
        {
            l = i;
            h = i + pass - 1;
            mid = (l + h) / 2;
            merge(A, l, mid, h);
        }
    }
    if (pass / 2 < A.size())
    {
        merge(A, 0, (pass / 2) - 1, A.size() - 1);
    }
}

void ReccMergeSort(vector<int> &A )
{
    int l , h, mid;
    
    merge(A, l , (l + h)/2 , h);
}
int main()
{

    vector<int> A = {11,13,7,12,16,9,24,5,10,3};
    // merge(A, 0, 0, 1);
    mergeSort(A);

    for (auto i : A)
    {
        cout << i << " ";
    }
    return 0;
}