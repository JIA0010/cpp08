#include <gtest/gtest.h>
#include "Span.hpp"

//Arrayが空の場合
TEST(SpanTest, Empty) {
  Span sp = Span(5);
  EXPECT_THROW(sp.shortestSpan(), std::exception);
  EXPECT_THROW(sp.longestSpan(), std::exception);
}

//Arrayに要素が1つの場合
TEST(SpanTest, OneElement) {
  Span sp = Span(5);
  sp.addNumber(6);
  EXPECT_THROW(sp.shortestSpan(), std::exception);
  EXPECT_THROW(sp.longestSpan(), std::exception);
}

//getsize()のテスト
TEST(SpanTest, GetSize) {
  Span sp = Span(5);
  EXPECT_EQ(sp.getSize(), 5);
}


//コピーコンストラクタの時、ディープコピーを返す
TEST(SpanTest, CopyConstructor) {
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);

  Span sp2 = sp;
  EXPECT_EQ(sp2.shortestSpan(), 2);
  EXPECT_EQ(sp2.longestSpan(), 14);
}

//代入演算子の時、ディープコピーを返す
TEST(SpanTest, AssignmentOperator) {
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);

  Span sp2 = Span(5);
  sp2 = sp;
  EXPECT_EQ(sp2.shortestSpan(), 2);
  EXPECT_EQ(sp2.longestSpan(), 14);
}

//shortestSpan()のテスト
TEST(SpanTest, ShortestSpan) {
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  EXPECT_EQ(sp.shortestSpan(), 2);
}

//longestSpan()のテスト
TEST(SpanTest, LongestSpan) {
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  EXPECT_EQ(sp.longestSpan(), 14);
}

//要素が最大値に達した場合、例外を投げる
TEST(SpanTest, Overflow) {
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  EXPECT_THROW(sp.addNumber(12), std::exception);
}
