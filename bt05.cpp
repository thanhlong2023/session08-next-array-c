#include <bits/stdc++.h>
int main()
{
    int arr[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 || i == 3 - 1 || j == 0 || j == 3 - 1)
            {
                sum += arr[i][j];
            }
        }
    }
    printf("%d", sum);
}