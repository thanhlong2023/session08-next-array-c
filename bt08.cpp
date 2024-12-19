#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i][2 - i]);
        sum += arr[i][2 - i];
    }

    printf("Tổng các số nằm trên đường chéo phụ: %d\n", sum);

    return 0;
}
