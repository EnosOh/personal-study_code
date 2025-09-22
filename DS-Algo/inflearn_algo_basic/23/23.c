#include <stdio.h>
#include <stdlib.h>

/*
    @brief : longest increasing subsequence length (continuous)
    @param : arr (int*), n (int)
    @return : longest_length (int)
*/
int getLongestIncreaseLength(const int *arr, int n)
{
    if (n == 0) return 0;

    int prev_val = arr[0];
    int longest_length = 1;  // 최소 길이는 1
    int temp_length = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= prev_val)
        {
            temp_length++;
        }
        else
        {
            if (temp_length > longest_length)
                longest_length = temp_length;
            temp_length = 1;
        }
        prev_val = arr[i];
    }

    if (temp_length > longest_length)
        longest_length = temp_length;

    return longest_length;
}

int main(void)
{
#ifdef DEBUG
    int temp_INFO_array[] = {5, 7, 3, 3, 12, 12, 13, 10, 11};
    int temp_N = sizeof(temp_INFO_array) / sizeof(temp_INFO_array[0]);
    printf("[INFO] getLongestIncreaseLength([5 7 3 3 12 12 13 10 11]) : %d\n",
           getLongestIncreaseLength(temp_INFO_array, temp_N));
#endif

    int N;
    if (scanf("%d", &N) != 1) return 1;

    int *sequence_input_array = (int *)malloc(sizeof(int) * N);
    if (!sequence_input_array) return 1;

    for (int i = 0; i < N; i++)
        scanf("%d", &sequence_input_array[i]);

    printf("%d\n", getLongestIncreaseLength(sequence_input_array, N));

    free(sequence_input_array);
    return 0;
}
