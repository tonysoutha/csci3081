#include "gtest/gtest.h"

#include <iostream>
#include <math.h>
#include <ctime>

#include "date.h"


class DateTest : public ::testing::Test {
 public:
  void SetUp( ) {
    // code here will execute just before the test ensues
	first_day = Date(2018, 9, 4);
	last_day = Date(2018, 12, 11);
  epoch_day = Date(10);
  days_btw1 = Date(2016, 1, 1);
  days_btw2 = Date(2016, 3, 1);
  today = Date(2019, 10, 7);
  leadingzeroes = Date(2010, 1, 6);
  }
 protected:
  Date first_day;          // first day of classes
  Date last_day;           // last day of classes
  Date epoch_day;
  Date days_btw1;
  Date days_btw2;
  Date today;
  Date leadingzeroes;
};



TEST_F(DateTest, PrintDateTests) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween

  std::string expected_out_1 = "1999-12-31\n";
  std::string expected_out_2 = "1776-07-04\n";
  std::string expected_out_3 = "2018-10-31\n";

  testing::internal::CaptureStdout();
  y2k.PrintDate(true);
  std::string output1 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout(); // You must do this EVERY TIME, or else it will segfault
  ind_day.PrintDate(true);
  std::string output2 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  best_holiday.PrintDate(true);
  std::string output3 = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

TEST_F(DateTest, PrintDateTestsWithoutNewline) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween

  std::string expected_out_1 = "1999-12-31";
  std::string expected_out_2 = "1776-07-04";
  std::string expected_out_3 = "2018-10-31";

  testing::internal::CaptureStdout();
  y2k.PrintDate(false);
  std::string output1 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  ind_day.PrintDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  best_holiday.PrintDate(false);
  std::string output3 = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

/**
  *
  * Note, this is the only provided test case which actually uses our test fixture
  *
  * However, it is illegal to mix TEST() and TEST_F() in the same test case (file).
  *
  */

TEST_F(DateTest, DaysBetweenTests) {
  EXPECT_EQ(first_day.GetUsDate(), "09-04-2018") << "First day of class not setup properly";
  EXPECT_EQ(last_day.GetUsDate(), "12-11-2018") << "Last day of class not setup properly";
  EXPECT_EQ(first_day.DaysBetween(last_day), 98) << "Days between is not calculated properly";
}

/**
  *
  * NOPE!  Can't test PRIVATE methods
  *
  */
/*
TEST(DateTest, ConvertFromDays) {
	Date convert_first_day = ConvertToDays(2458365);
	EXPECT_STREQ(convert_first_day.GetUsDate(), "09-04-2018");
}
*/

TEST_F(DateTest, EpochTest) {
  EXPECT_EQ(epoch_day.GetDate(), "1970-01-01") << "epoch constructor not setup correctly";
}

TEST_F(DateTest, GetDateTest) {
  EXPECT_EQ(first_day.GetDate(), "2018-09-04") << "getdate not setup correctly";
}

TEST_F(DateTest, DateTodayTest) {
  EXPECT_EQ(today.GetDate(), "2019-10-07") << "today's date is incorrect";
}

TEST_F(DateTest, DaysBetweenTest) {
  EXPECT_EQ(days_btw1.DaysBetween(days_btw2), 60) << "DaysBetween not setup correctly";
}

TEST_F(DateTest, GetUsDateTest) {
  EXPECT_EQ(first_day.GetUsDate(), "09-04-2018") << "GetUsDate not setup correctly";
}

TEST_F(DateTest, OperatorTest) {
  EXPECT_EQ((first_day-2).GetDate(), "2018-09-02") << "Operator- not setup correctly";
}

TEST_F(DateTest, LeadingZeroesTest) {
  EXPECT_EQ(leadingzeroes.GetDate(), "2010-01-06") << "Dates don't have leading zeroes";
}
