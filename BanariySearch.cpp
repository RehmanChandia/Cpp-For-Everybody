#include<iostream>
using namespace std;
int banairysearch(int arr[], int size, int key) {
    int start = 0;
    int end = size- 1;
    int mid;
    while(start<=end)
    {
        mid = (start+end)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            start = mid+1;
        }else {
            end = mid- 1;
        }
}
 return -1;
    
}
int main() {
    int size, key;

    cin >> size;
    int* arr = new int[size];

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cin >> key;

    int result = banairysearch(arr, size, key);

    cout << result;

    delete[] arr;
    return 0;
}
