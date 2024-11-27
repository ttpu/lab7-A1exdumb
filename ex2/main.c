#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    int rotated[n];
    k = k % n;
    for (int i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    for (int i = 0; i < n - k; i++) {
        rotated[k + i] = arr[i];
    for (int i = 0; i < n; i++) {
        arr[i] = rotated[i];
    }
}
int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) {
        printf("Error: n must be between 1 and 100.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d space-separated integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of rotations: ");
    scanf("%d", &k);

    if (k < 0 || k > n) {
        printf("Error: k must be between 0 and n.\n");
        return 1;
    }
    rotateRight(arr, n, k);
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}