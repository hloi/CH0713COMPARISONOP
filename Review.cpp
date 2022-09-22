//
// Created by hloi on 9/22/2022.
//

#include "Review.h"

bool Review::operator==(const Review &rhs) {
    return (GetRating() == rhs.GetRating()) &&
           (GetComment() == rhs.GetComment());
}

bool Review::operator<(const Review &rhs) {
    return GetRating() < rhs.GetRating();
}

bool Review::operator!=(const Review &rhs) {
    return !(*this == rhs);
}

bool Review::operator>=(const Review &rhs) {
    return !(*this < rhs);
}
