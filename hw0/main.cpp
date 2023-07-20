#include<cmath>
#include"eigen-3.4.0/Eigen/Core"
#include"eigen-3.4.0/Eigen/Dense"
#include<iostream>

int main(){

    // vector definition
    Eigen::Vector3f v(2.0f,1.0f,1.0f);

    // matrix definition
    Eigen::Matrix3f i;
    i << std::sqrt(0.5), -std::sqrt(0.5), 1.0,
         std::sqrt(0.5), std::sqrt(0.5), 2.0,
         0, 0, 1.0;
    
    // matrix multiply vector i * v
    std::cout << i * v << std::endl;
    
    return 0;
}