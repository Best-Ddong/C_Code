#include <stdio.h>
int main() {
    int a[100], j, num = 0;
    scanf("%d", &j);
    for (int i = 0; i < j; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 2)
        {
            num++;
        }
    }
        printf("%d\n", num);
        return 0;
    }
