#include <iostream>
#include <vector>
#include <numeric>

double average(const std::vector<int>& vec) {
    double avg = 0;
    for (unsigned int i = 0; i < vec.size(); i++) {
        avg += vec[i];
    }
    return avg/vec.size();
}

double average2(const std::vector<int>& vec) {
    double avg = 0;
    for (int n : vec) {
        avg += n;
    }
    return avg/vec.size();
}

double average3( const std::vector<int>& vec) {
    double sum = accumulate(vec.begin(), vec.end(), 0);
    return sum/vec.size();
}

int main() {
    std::vector<int> vec{ 5, 20, 14, 13, 7}; // avg: 11.8
    double avg1 = average(vec);
    double avg2 = average2(vec);
    double avg3 = average3(vec);
    std::cout << "Average is " << avg1 << " according to average via loop over indices" << '\n'
              << "Average is " << avg2 << " according to average via a range-based loop" << '\n'; 
    std::cout << "Average is " << avg3 << " according to average via std::accumulate" << '\n';

}
