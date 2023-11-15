#include <stdio.h>

int main() {
    int n, deleteIndex;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap chi so phan tu can xoa: ");
    scanf("%d", &deleteIndex);

    for (int i = deleteIndex; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
