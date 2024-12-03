#include <stdio.h>

void transpose(int rows, int columns,int matrix[rows][columns]);

int main(){
    int rows;
    int columns;

    do {
        printf("Enter number of rows and number of columns:  ");
        scanf("%d %d", &rows, &columns);
        if (rows < 0 || columns < 0) {
            printf("Numbers must be positive.");
        }

        printf("\n");
    } while (rows < 0 || columns < 0);

    int matrix1[rows][columns];
    for (int i = 0; i < rows; i++) {


        for (int j = 0; j < columns; j++) {
            printf("Enter value for matrix[%d][%d]", i, j);
            scanf("%d", &matrix1[i][j]);
        }

    }
    printf("Transpose: \n");
    transpose(rows, columns, matrix1);


}

void transpose(int rows,int columns,int matrix[rows][columns]) {
    int new_matrix[columns][rows];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            // new_matrix[i][j] = matrix[j][i]; --> This accesses stuff that it shouldn't access
            new_matrix[j][i] = matrix[i][j];
        }
    }
    printf("\n");
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", new_matrix[i][j]);
        }
        printf("\n");
    }

}