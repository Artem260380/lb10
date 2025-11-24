#ifndef ALGORITHM_UTILS_H
#define ALGORITHM_UTILS_H

#include <vector>

class AlgorithmUtils {
public:
    static int findMinPositive(const std::vector<int>& array);
    static int sumNegativesOnly(const std::vector<int>& array);
    static long long getFibonacci(int n);
    static double calculateCurrent(double voltage, double resistance);
};

#endif // ALGORITHM_UTILS_H
