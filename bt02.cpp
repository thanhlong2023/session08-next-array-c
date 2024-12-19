#include <bits/stdc++.h>
#define lenght sizeof(arr) / sizeof(arr[0])
int main()
{
    int n;
    printf("Nhập số bạn muốn kiểm tra ");
    scanf("%d", &n);
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int check = 0, pos_i;
    for (int i = 0; i < lenght; i++)
    {
        if (arr[i] == n)
        {
            check = 1;
            pos_i = i;
        }
    }
    if (check)
    {
        printf("Vị trí phần tử trong mảng là %d \n", pos_i);
    }
    else
    {
        printf("PHần tử không tồn tại trong mảng\n");
    }
    return 0;
}