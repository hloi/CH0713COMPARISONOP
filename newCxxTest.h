/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newCxxTest.h
 * Author: hloi
 *
 * Created on January 26, 2018, 3:52 PM
 */

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H
#include <string.h>
#include <vector>
#include <iostream>

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include "Review.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testMyFunction() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions. 
        vector<Review> reviewList;
        Review currentReview;
        Review lowestReview;
        int currentRating;
        string currentComment;

        Review currentReview1;
        currentReview1.SetRatingAndComment(5, "Great place!");
        Review currentReview2;
        currentReview2.SetRatingAndComment(5, "Loved the food.");
        Review currentReview3;
        currentReview3.SetRatingAndComment(2, "Pretty bad service.");
        Review currentReview4;
        currentReview4.SetRatingAndComment(4, "New owners are nice.");
        Review currentReview5;
        currentReview5.SetRatingAndComment(2, "Yuk!!!");
        reviewList.push_back(currentReview1);
        reviewList.push_back(currentReview2);
        reviewList.push_back(currentReview3);
        reviewList.push_back(currentReview4);
        reviewList.push_back(currentReview5);
        // Find and output lowest review
        lowestReview = reviewList.at(0);
        for (int i = 0; i < reviewList.size(); ++i) {
            if (reviewList.at(i) < lowestReview ) {
                lowestReview = reviewList.at(i);
            }
        }
        TS_ASSERT_EQUALS(lowestReview.GetRating(),2);
        TS_ASSERT_EQUALS(lowestReview.GetComment(),"Pretty bad service.");

    }

    void testMyFunction2() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        vector<Review> reviewList;
        Review currentReview;
        Review highestReview;
        int currentRating;
        string currentComment;

        Review currentReview1;
        currentReview1.SetRatingAndComment(5, "Great place!");
        Review currentReview2;
        currentReview2.SetRatingAndComment(5, "Loved the food.");
        Review currentReview3;
        currentReview3.SetRatingAndComment(2, "Pretty bad service.");
        Review currentReview4;
        currentReview4.SetRatingAndComment(4, "New owners are nice.");
        Review currentReview5;
        currentReview5.SetRatingAndComment(2, "Yuk!!!");
        reviewList.push_back(currentReview1);
        reviewList.push_back(currentReview2);
        reviewList.push_back(currentReview3);
        reviewList.push_back(currentReview4);
        reviewList.push_back(currentReview5);
        // Find and output lowest review
        highestReview = reviewList.at(0);
        for (int i = 1; i < reviewList.size(); ++i) {
            if (reviewList.at(i) >= highestReview ) {
                highestReview = reviewList.at(i);
            }
        }
        TS_ASSERT_EQUALS(highestReview.GetRating(),5);
        TS_ASSERT_EQUALS(highestReview.GetComment(),"Loved the food.");

    }
};
#endif /* NEWCXXTEST_H */

