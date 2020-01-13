#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <cmath>
using namespace __gnu_pbds;
using namespace std;

int partition (int arr[],int low,int high)
{
    int pivot = arr[high];  
 
    int i = (low - 1);  

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap( arr[i], arr[j]);
        }
    }
    swap( arr[i + 1] , arr[high]);
    return (i + 1);
}
 
void quickSort(int arr[],int low,int high){
    if (low < high)
    {
        /* pi is partitioning index, arr[pi] is now
           at right place */
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //=====================================code starts here
    
    
    return 0;
}