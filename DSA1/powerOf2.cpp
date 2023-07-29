#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = pow(2, 0);

    for (int i = 0; i < 31; i++)
    {
        if (n >= ans)
        {
            if (n == ans)
            {
                cout << "True";
                break;
            }
        }
        ans = ans * 2;
    }
    return 0;
}