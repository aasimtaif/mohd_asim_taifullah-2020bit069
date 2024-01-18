#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int start = 0;
    int end = 8;
    int mid = (start + end) / 2;
    int target;
    cout << "Target number?" << endl;
    cin >> target;
    while (start <= end)
    {
        if (number[mid] > target)
        {
            end = mid;
            mid = ((start + end) + 1) / 2;
        }
        else if (number[mid] < target)
        {
            start = mid;
            mid = ((start + end) + 1) / 2;
        }
        else
        {
            cout << mid;
            break;
        }
    }
    return 0;
}