#include <iostream>
#include <Eigen/Dense>

int main(int argc, char** argv) {
    Eigen::Matrix3d matrix1;
    matrix1 << 1, 2, 3,
               4, 5, 6,
               7, 8, 9;

    Eigen::Matrix3d matrix2;
    matrix2 << 9, 8, 7,
               6, 5, 4,
               3, 2, 1;

    Eigen::Matrix3d result = matrix1 * matrix2;

    std::cout << "myProject:\n";
    std::cout << "Matrix multiplication result:\n";
    std::cout << result << std::endl;

    return 0;
}
