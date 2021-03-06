//compile with : g++ basic-gsl.cpp -lgsl -lgslcblas
#include <cstdio>
#include <gsl/gsl_sf_bessel.h>

int
main(void)
{
 
  for(double ii=0; ii<=1500; ++ii ){
    double x = 0.01*ii;    
    double y = gsl_sf_bessel_j0(x);
    std::printf ("%20.16e \t %20.16e \n", x, y);
    
  }
  return 0;
}
