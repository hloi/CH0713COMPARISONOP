#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<Review> reviewList;
    Review currentReview;
    Review lowestReview;
    int currentRating;
    string currentComment;
    int i;

    cout << "Type rating + comments. To end: -1" << endl;
    cin >> currentRating;
    while (currentRating >= 0) {
        getline(cin, currentComment); // Gets rest of line
        currentReview.SetRatingAndComment(currentRating, currentComment);
        reviewList.push_back(currentReview);
        cin >> currentRating;
    }

    // Find and output lowest review
    lowestReview = reviewList.at(0);
    for (i = 1; i < reviewList.size(); ++i) {
        if (reviewList.at(i) < lowestReview ) {
            lowestReview = reviewList.at(i);
        }
    }

    cout << endl;
    cout << lowestReview.GetRating() << " "
         << lowestReview.GetComment() << endl;

    return 0;
}