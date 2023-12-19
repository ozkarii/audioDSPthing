#ifndef DSP_HH
#define DSP_HH

#include <vector>
#include <complex>
#include <cmath>

using cVector = std::vector<std::complex<double>>;

namespace DSP
{

    std::vector<float> convolution(const std::vector<float> &sound,
                                   const std::vector<float> &ir);
    
    cVector fft(cVector &input);

    cVector ifftUnnormalized(cVector &input);

    std::vector<double> ifft(cVector &input);

    void zeroPad(cVector &input);

    cVector toComplexVector(std::vector<double> &input);
    
};

#endif