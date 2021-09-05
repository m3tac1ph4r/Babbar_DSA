#include <bits/stdc++.h>
using namespace std;
#define ll long long

int merge(int arr[], int l, int mid, int r)
{
    int inv=0;
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
        a[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        b[j] = arr[mid + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 and j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
            inv+=n1-i;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
    return inv;
}

int mergeSort(int arr[], int l, int r)
{
    int inv=0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        inv+=mergeSort(arr, l, mid);
        inv+=mergeSort(arr, mid + 1, r);
        inv+=merge(arr, l, mid, r);
    }
    return inv;
}
int main()
{
    int arr[5] = {3, 5, 1, 4, 2};
    cout<<mergeSort(arr, 0, 4)<<endl;
    return 0;
}