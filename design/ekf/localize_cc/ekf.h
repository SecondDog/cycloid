#ifndef MODEL_EKF_H_
#define MODEL_EKF_H_
#include <Eigen/Dense>

// This file is auto-generated by ekf/codegen.py. DO NOT EDIT.


class EKF {
 public:
  EKF();
  
  void Reset();

  void Predict(float Delta_t, float u_x, float u_theta);
  bool UpdateLm_bearing(float l_px, float l_x, float l_y, Eigen::MatrixXf Rk);


  Eigen::VectorXf& GetState() { return x_; }
  Eigen::MatrixXf& GetCovariance() { return P_; }

 private:
  Eigen::VectorXf x_;
  Eigen::MatrixXf P_;
};

#endif  // MODEL_EKF_H_
