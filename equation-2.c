#include <stdio.h>
double delta(double a[3][3]) {
    double sum=0;
    for (int i=0;i<3;i++) {
        sum+=a[0][i]*a[1][(i+1)%3]*a[2][(i+2)%3];
    }
    for (int i=0;i<3;i++) {
        sum-=a[0][(i+2)%3]*a[1][(i+1)%3]*a[2][i];
    }
    return sum;
}
void change_col(double a[3][4],double b[3][3],int col1,int col2) {
    int flag=0;
    for (int j=0;j<4;j++) {
        if (j==col2) {
            flag=1;
            continue;
        }
        for (int i=0;i<3;i++) {
            if (j==col1)
                b[i][j-flag]=a[i][col2];
            else
                b[i][j-flag]=a[i][j];
        }
    }
}
void remove_col(double a[3][4],double b[3][3],int col) {
    int flag=0;
    for (int j=0;j<4;j++) {
        if (j==col) {
            flag=1;
            continue;
        }
        for (int i=0;i<3;i++) {
            b[i][j-flag]=a[i][j];
        }
    }
}
int main() {
    double matrix[3][4];
    for (int i=0;i<3;i++) {
        for (int j=0;j<4;j++) {
            scanf("%lf",&matrix[i][j]);
        }
    }
    double matrix_x[3][3]={0},
    matrix_y[3][3]={0},
    matrix_z[3][3]={0},
    matrix_0[3][3]={0};
    change_col(matrix,matrix_x,0,3);
    change_col(matrix,matrix_y,1,3);
    change_col(matrix,matrix_z,2,3);
    remove_col(matrix,matrix_0,3);
    double x,y,z;
    x=delta(matrix_x)/delta(matrix_0);
    y=delta(matrix_y)/delta(matrix_0);
    z=delta(matrix_z)/delta(matrix_0);
    printf("%.2lf %.2lf %.2lf",x,y,z);

    return 0;
}