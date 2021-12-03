#include <omp.h>
#include <iostream>

using namespace std;


double calculate(double step) {
    int i;
    double x, sum = 0.0;
    
    #pragma omp parallel
    for (i=0;i<1000000;++i)
    {
        x = (i-0.5) * step;
        sum += 2.0 / (1.0 + x*x);
    }
    
    return step * sum;
}

int main(){

    double c1;
    double step = 12;

    c1 = calculate(step);

    cout<< c1 << endl;

}