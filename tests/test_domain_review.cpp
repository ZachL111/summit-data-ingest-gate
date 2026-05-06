#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{73, 48, 21, 94};
    assert(domain_review_score(item) == 225);
    assert(domain_review_lane(item) == "ship");
}
