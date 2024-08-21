// all sorting // /* not done */

#include<bits/stdc++.h>
using namespace std;

// bubble sort //

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n){
    int i,j;
    for (i=0;i<n-1;i++)
    // Last i elements are already in place
        for (j=0;j<n-i-1;j++)
            if (arr[j]> arr[j+1])
                swap(&arr[j],&arr[j+1]);
}

/* Function to print an array */
void printArray(int arr[], int size){
    int i;
    for (i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n); // change it
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}

// selection sort //

void selectionSort(int arr[], int n){
    int i, j, min_idx;
    // One by one move boundary of unsorted subarray
    for (i=0;i<n-1;i++){
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j=i+1;j<n;j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element

        swap(&arr[min_idx], &arr[i]);
    }
}

// insertion sort //

void insertionSort(int arr[], int n){
    int i,j,key;
    for (i=1;i<n;i++){
        key = arr[i];
        for (j=1;j>0&&arr[j-1]>key;j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }
}

// shell sort //

int shellSort(int arr[], int n){
    for (int gap = n/2; gap > 0; gap /= 2){
        for (int i = gap; i < n; i += 1){
            int temp = arr[i];
            for (int j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
    return 0;
}

// merge sort //

void merge(int *a, int *b, int low, int pivot, int high){
    int h, i, j, k;
    h = low;
    i = low;
    j = pivot+1;

    while((h<=pivot)&&(j<=high)){ // O(n)
        if(a[h]<=a[j]){
            b[i]=a[h];
            h++;
        }
        else{
            b[i]=a[j];
            j++;
        }
        i++;
    }

    if(h>pivot){                    // O(<n)
        for(k=j; k<=high; k++){
            b[i]=a[k];
            i++;
        }
    }
    else{
        for(k=h; k<=pivot; k++){    // O(<n)
            b[i]=a[k];
            i++;
        }
    }
    for(k=low; k<=high; k++)
        a[k]=b[k];                  // O(n)
}

void mergesort(int *a, int*b, int low, int high){
    int pivot;
    if(low<high){
        pivot=(low+high)/2;
        mergesort(a,b,low,pivot); // O(n/2)
        mergesort(a,b,pivot+1,high); // O(n/2)
        merge(a,b,low,pivot,high); // O(???)
    }
}

// quick sort //

int partition(int *arr, const int left, const int right) {
    const int mid = left + (right - left) / 2;
    const int pivot = arr[mid];
    // move the mid point value to the front.
    std::swap(arr[mid],arr[left]);
    int i = left + 1;
    int j = right;
    while (i <= j) { //O(n)
        while(i <= j && arr[i] <= pivot) { //O(x), x<n
        i++;
        }
        while(i <= j && arr[j] > pivot) { //O(y), y+x = n
        j--;
        }
        if (i < j) {
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i - 1],arr[left]);
    return i - 1;
}

void quicksort(int *arr, const int left, const int right){
    if (left >= right) {
    return;
    }

    int part = partition(arr, left, right);//O(?)

    quicksort(arr, left, part - 1, sz); //O(n/2)
    quicksort(arr, part + 1, right, sz); //O(n/2)
}