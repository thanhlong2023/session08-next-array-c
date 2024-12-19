#include <bits/stdc++.h>
using namespace std;

int dem[1001];
#define lenght sizeof(arr) / sizeof(int)

int main()
{
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = lenght;
    int max = -1e9;

    for (int i = 0; i < n; i++)
    {
        dem[arr[i]]++;
        if (arr[i] > max)
            max = arr[i];
    }

    int cnt = -1e9;
    for (int i = 0; i <= max; i++)
    {
        if (dem[i] > cnt)
        {
            cnt = dem[i];
        }
    }

    int tanSuat = -1;
    for (int i = 0; i < n; i++)
    {
        if (dem[arr[i]] == cnt)
        {
            tanSuat = arr[i];
            break;
        }
    }

    printf("%d\n", tanSuat);
    return 0;
}
