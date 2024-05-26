#include<iostream>
using namespace std;

int firstoccurence(int arr[], int k, int n) {
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (k == arr[mid]) {
            ans = mid;
            e = mid - 1;
        } else if (k > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int lastoccurence(int arr[], int k, int n) {
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (k == arr[mid]) {
            ans = mid;
            s = mid + 1;
        } else if (k > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {0, 1, 1, 1, 5};
    cout << "First occurence of 1 is at index: " << firstoccurence(arr, 1, 5) << endl;
    cout << "Last occurence of 1 is at index: " << lastoccurence(arr, 1, 5);
    return 0;
}


