#include <random>
#include <iostream>
#include <iomanip>
#include <omp.h>
#include <vector>
#include <thrust/host_vector.h>
#include <thrust/device_vector.h>
#include <thrust/generate.h>
#include <thrust/functional.h>
#include <thrust/copy.h>

using namespace std;

int main () {
    long N = 100000000L;
    long sum = 0;
    
    default_random_engine generator;
    uniform_real_distribution<double> distribution(0.0, 1.0);
    
    int n = 10;

    thrust::host_vector<int> a(n);

    
    for (long i = 0; i < N; i++) {
        double x, y;

        x = distribution(a[i]);
        y = distribution(a[i]);
        if (x*x + y*y <= 1) {
            sum++;
        }
    }

    double pi = 4.0 * sum / N;
    cout << pi << endl;
    cout << sum << endl;

}