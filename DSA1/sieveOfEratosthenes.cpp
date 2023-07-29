#include <iostream>
#include <vector>
using namespace std;

int countPrime(int n)
{
    vector<bool> prime(n, true);

    prime[0] = prime[1] = false; // edge case

    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;

            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout<<countPrime(n);
    return 0;
}