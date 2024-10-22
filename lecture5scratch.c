#include <stdlib.h>

int * max_of_2d_array(int ** int_arr, size_t num_row, size_t num_col, int axis);

int * max_arr = (int *)malloc((axis == 0 ? num_col : num_row) * sizeof(int));
if(axis == 0){
    for(size_t i = 0; i < num_col; i++){
        int max = int_arr[0][1];
        for (size_t j = 1; j < num_row; i++){
            if(int_arr[i][j] > max){
                max = int_arr[j][i];
            }
        }
        max_arr[i] = max;
    }
}

if(axis == 1)
{
    for(size_t i = 0; i < num_row; i++)
}

        
int* toBinary(int n, int* returnSize)
{
    //allocate memory
    int size = (int)floor(log2(n)) + 1;
    int* out = malloc(size * sizeof(int));
    *returnSize = size;

    //convert n to binary
    for(int i = size - 1;i >= 0; i--){
        out[i] = n % 2;
        n = n / 2 ;
    }
}

int* evenOddBit(int n, int* returnSize){
    int* out = malloc(2 * sizeof(int));

    int binSize;
    int* bin = toBinary(n, &binSize);

    int even = 0;
    int odd = 0;
}


int main()
{
    int **int_arr_2d = (int**)malloc(n_rows * sizeof(int *));

    int retSize;
    int* ret = evenOddBit(n, retSize);

    free(ret);
    
}