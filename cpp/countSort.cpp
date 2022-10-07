#include <iostream>
#include <vector>
using namespace std;

int maxArray(vector<int> &A)
{
    int max = A[0];

    for (int i = 1; i < A.size(); i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

void countSort(vector<int> &A)
{

    vector<int> aux;
    // max elemet in given array
    int max = maxArray(A);

    // aux array size of max given array
    aux.resize(max + 1);

    //count all elements of given array in index of aux
    for (int i = 0; i < A.size(); i++)
    {
        aux[A[i]]++;
    }

    int j = 0;
    for (int i = 0; i < aux.size(); i++)
    {

        while (aux[i] != 0)
        {
            cout << "tets " << aux[i] << endl;

            A[j] = i;
            j++;
            aux[i]--;
        }
    }
    for (int i = 0; i < aux.size(); i++)
    {
        cout << aux[i] << " ";
    }
}

int main()
{
    vector<int> A = {3, 4, 5, 2, 1, 5, 6, 6, 15};
    // vector<int> A(10, 5);
    countSort(A);
    cout << endl;

    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}
/*
algo->
need= Auxilary array which is size will be max element of given array

aux array asigned  all element with 0

traverse given array
    Aux[each elment] = Aux[each element]  + 1;

traverse Aux array
    if element is not zero
        loop while i become zero
            given[k] = index_aux;



*/