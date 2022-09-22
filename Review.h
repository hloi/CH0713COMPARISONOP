//
// Created by hloi on 9/22/2022.
//

#ifndef CH0713COMPARISONOP_REVIEW_H
#define CH0713COMPARISONOP_REVIEW_H


#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Review {
public:
    void SetRatingAndComment(int revRating, string revComment) {
        rating = revRating;
        comment = revComment;
    }
    int GetRating() const { return rating; }
    string GetComment() const { return comment; }
    bool operator==(const Review& rhs);
    bool operator<(const Review& rhs);
    bool operator!=(const Review& rhs);
    bool operator>=(const Review& rhs);
private:
    int rating = -1;
    string comment = "NoComment";
};


#endif //CH0713COMPARISONOP_REVIEW_H
