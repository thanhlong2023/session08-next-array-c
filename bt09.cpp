#include <bits/stdc++.h>
int dem[1001];
#define lenght sizeof(arr) / sizeof(int)
#define lenghtDem sizeof(dem) / sizeof(int)
int main()
{
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int max = -1e9;
    for (int i = 0; i < lenght; i++)
    {
        dem[arr[i]]++;
        if (arr[i] > max)
            max = arr[i];
    }
    int cnt = -1e9;
    int mostFrequent = -1;
    for (int i = 0; i <= max; i++)
    {
        // printf("%d ", dem[i]);
        if (dem[i] > cnt)
        {
            cnt = dem[i];
        }
    }
    for (int i = 0; i <= max; i++)
    {

        if (dem[i] == cnt)
        {
            printf("%d ", i);
            break;
        }
    }

    return 0;
}