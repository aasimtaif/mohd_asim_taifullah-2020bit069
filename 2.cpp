#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "lenght of array ?" << endl;
    cin >> n;
    int array[n] ;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        array[i] = a;
    }
    for(int i = 0; i < n; i++){
        if(array[i]%2 ==0){
            cout<<array[i]<<" ";
        }
    }

    return 0;
}