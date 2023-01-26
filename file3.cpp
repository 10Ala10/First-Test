#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << min(1, 2) << endl;
    cout << max(1, 2) << endl;
    cout << min(2, 3) << endl;
    cout << "merge: " << endl;

    return 0;
}