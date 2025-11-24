#include "AlgorithmUtils.h"
#include <limits>

int AlgorithmUtils::findMinPositive(const std::vector<int>& array) {
    if (array.empty()) {
        return -1;
    }

    int minPositive = std::numeric_limits<int>::max();
    bool found = false;

    for (int val : array) {
        if (val > 0 && val < minPositive) {
            minPositive = val;
            found = true;
        }
    }

    if (!found) {
        return -1;
    }
    return minPositive;
}

int AlgorithmUtils::sumNegativesOnly(const std::vector<int>& array) {
    int sum = 0;
    for (int val : array) {
        if (val > 0) {
            return 1;
        }
        sum += val;
    }
    return sum;
}

long long AlgorithmUtils::getFibonacci(int n) {
    if (n < 0) {
        return -1;
    }
    if (n == 0) return 0;
    if (n == 1) return 1;

    long long a = 0;
    long long b = 1;

    for (int i = 2; i <= n; i++) {
        long long temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

double AlgorithmUtils::calculateCurrent(double voltage, double resistance) {
    if (resistance <= 0) {
        return -1.0;
    }
    return voltage / resistance;
}