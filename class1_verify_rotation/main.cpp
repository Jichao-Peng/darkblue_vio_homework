#include <iostream>
#include <Eigen/Core>
#include <Eigen/Geometry>

using namespace std;

int main()
{
    //生成旋转旋转矩阵
    Eigen::Matrix3d R = Eigen::Matrix3d::Identity();
    Eigen::AngleAxisd rotation_vector(M_PI/4, Eigen::Vector3d(0,0,1));
    R = rotation_vector.toRotationMatrix();
    Eigen::Quaterniond q;
    q = R;
    cout<<"R is"<<endl<<R<<endl<<endl;

    //生成变化量w
    Eigen::Matrix3d R_w = Eigen::Matrix3d::Zero();
    R_w<<0, -0.3, 0.2, 0.3, 0, -0.1, -0.2, 0.1, 0;
    Eigen::Quaterniond q_w;
    q_w = R_w;
    cout<<"w is"<<endl<<R_w<<endl<<endl;

    Eigen::Matrix3d R_prime = R*R_w;
    cout<<"R_prime is"<<endl<<R_prime<<endl<<endl;

}