#include <iostream>
#include "spline.h"

int main(int argc, char** argv) 
{
  std::vector<double> X(5), Y(5);
  X[0]=0.1; X[1]=0.4; X[2]=1.2; X[3]=1.8; X[4]=2.0;
  Y[0]=0.1; Y[1]=0.7; Y[2]=0.6; Y[3]=1.1; Y[4]=0.9;
  
  tk::spline s;
  s.set_points(X,Y);

  double x = s(1.5);

  std::cout << "spline at " << x << " is " << s(x) << std::endl;

}
