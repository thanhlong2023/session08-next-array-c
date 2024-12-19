#include <bits/stdc++.h>
using namespace std;

int dem[1001];
#define length sizeof(arr) / sizeof(int)
#define lengthDem sizeof(dem) / sizeof(int)

int main()
{
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int max = -1e9;

    // Đếm số lần xuất hiện của mỗi phần tử
    for (int i = 0; i < length; i++)
    {
        dem[arr[i]]++;
        if (arr[i] > max)
            max = arr[i];
    }

    int cnt = -1e9;
    int mostFrequent = -1;
    for (int i = 0; i <= max; i++)
    {
        if (dem[i] > cnt)
        {
            cnt = dem[i];
            mostFrequent = i;
        }
    }

    // Tìm phần tử đầu tiên xuất hiện nhiều nhất
    for (int i = 0; i < lengthDem; i++)
    {
        if (dem[arr[i]] == mostFrequent)
        {
            printf("%d", arr[i]);
            break;
        }
    }

    return 0;
}
