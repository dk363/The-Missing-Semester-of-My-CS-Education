#include <stdio.h>
#include <stdlib.h>

void merge_sort_recursive(int *arr, int *temp, int left, int right)
{
        if (left >= right) {
                return;
        }

        int mid = left + (right - left) / 2;

        merge_sort_recursive(arr, temp, left, mid);
        merge_sort_recursive(arr, temp, mid + 1, right);

        int i = left;
        int j = mid + 1;
        int k = left;

        while (i <= mid && j <= right) {
                if (arr[i] <= arr[j]) {
                        temp[k++] = arr[i++];
                } else {
                        temp[k++] = arr[j++];
                }
        }

        while (i <= mid) {
                temp[k++] = arr[i++];
        }

        while (j <= right) {
                temp[k++] = arr[j++];
        }

        for (i = left; i <= right; i += 1) {
                arr[i] = temp[i];
        }
}

void merge_sort(int *arr, int arr_len) 
{
        if (arr == NULL || arr_len <= 1) {
                return;
        }

        int *temp;
        temp = (int *)malloc(arr_len * sizeof(int));
        if (temp == NULL) {
                printf("merge_sort malloc temp failed\n");
                return;
        }


        merge_sort_recursive(arr, temp, 0, arr_len - 1);

        free(temp);
}

int main(void) 
{
        int arr[8] = {3, 1, 4, 1, 5, 9, 2, 6};

        merge_sort(arr, 8);

        for (int i = 0; i < 8; i++) {
                printf("%d\t", arr[i]);
        }        

        return 0;
}