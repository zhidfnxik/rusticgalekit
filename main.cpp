#include <string>
#include <vector>

void sort_small() {
    int values[4] = {9, 3, 7, 1};
    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (values[j] < values[i]) {
                int t = values[i];
                values[i] = values[j];
                values[j] = t;
            }
        }
    }
    (void)values[0];
}

void count_multiples() {
    int count = 0;
    for (int i = 1; i <= 100; ++i) {
        if (i % 7 == 0) count += 1;
    }
    (void)count;
}

void vector_reverse() {
    std::vector<int> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    std::vector<int> rev;
    for (std::size_t i = values.size(); i > 0; --i) rev.push_back(values[i - 1]);
    (void)rev;
}

void shift_left() {
    unsigned int n = 7u;
    unsigned int shifted = n << 4;
    (void)shifted;
}

extern "C" int prime_delta();
extern "C" void cedar_signal();
extern "C" void lunar_canyon();
extern "C" void subtle_harbor();
extern "C" void cobalt_haven();

int main() {
    sort_small();
    count_multiples();
    vector_reverse();
    shift_left();
    cedar_signal();
    lunar_canyon();
    subtle_harbor();
    cobalt_haven();
    return prime_delta();
}
