#include <iostream>
using namespace std;

void subArraySum(int arr[], int n, int sum)
{
    int c = arr[0], start = 0, i;
    for (i = 1; i <= n; i++) {
        while (c > sum && start < i - 1) {
            c = c - arr[start];
            start++;
        }
        if (c == sum) {
            cout << "Sum found between indexes "
                 << start << " and " << i - 1;
            return;
        }
        if (i < n)
            c = c + arr[i];
    }
    cout << "No subarray found";
    return;
}

int main()
{
    int arr[] = { 4,3,2,5,-3,-2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 7;
    subArraySum(arr, n, sum);
    return 0;
}