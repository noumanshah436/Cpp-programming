#include<iostream>
using namespace std;

void swap(int * a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rearrange(int arr[], int n)
{
    // The following few lines are
    // similar to partition process
    // of QuickSort. The idea is to
    // consider 0 as pivot and
    // divide the array around it.
    int i = -1;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < 0)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    // Now all positive numbers are at
    // end and negative numbers at the
    // beginning of array. Initialize
    // indexes for starting point of
    // positive and negative numbers
    // to be swapped

    int positive = i + 1, neg = 0;
    // Increment the negative index by
    // 2 and positive index by 1,
    // i.e., swap every alternate negative
    // number with next poitive number
    while (positive < n && neg < positive &&  arr[neg] < 0)
    {
        swap(&arr[neg], &arr[positive]);
        positive++;
        neg += 2;
    }
}


int main() {
    int arr[5] = { 1, -1, 2, -2, 3 };
    rearrange(arr, 5);
    for (int a : arr) {
        cout << a<<" ";
    }
    return 0;
}