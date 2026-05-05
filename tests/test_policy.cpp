#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{80, 84, 23, 11, 4};
    assert(score_signal(signal_case_1) == 144);
    assert(classify_signal(signal_case_1) == "review");
    Signal signal_case_2{100, 80, 20, 11, 6};
    assert(score_signal(signal_case_2) == 192);
    assert(classify_signal(signal_case_2) == "accept");
    Signal signal_case_3{72, 107, 14, 6, 5};
    assert(score_signal(signal_case_3) == 202);
    assert(classify_signal(signal_case_3) == "accept");
}
