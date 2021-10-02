#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int x = findGCD(A, N);

        int ans = 0;
        for (int j = 0; j < N; j++)
        {
            ans += A[j] / x;
        }

        cout << ans << endl;
    }
    return 0;
}
