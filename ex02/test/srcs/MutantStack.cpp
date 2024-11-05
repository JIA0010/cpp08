#include <gtest/gtest.h>
#include "MutantStack.hpp"

//MutantStackが空の場合
TEST(MutantStackTest, Empty) {
  MutantStack<int> mstack;
  EXPECT_EQ(mstack.size(), 0);
}

//MutantStackのコピーコンストラクタのテスト
TEST(MutantStackTest, CopyConstructor) {
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  mstack.push(3);
  mstack.push(8);

  MutantStack<int> mstack2 = mstack;
  EXPECT_EQ(mstack2.size(), 4);
  EXPECT_EQ(mstack2.top(), 8);
  mstack2.pop();
  EXPECT_EQ(mstack2.size(), 3);
  EXPECT_EQ(mstack2.top(), 3);
}

//MutantStackの代入演算子のテスト
TEST(MutantStackTest, AssignmentOperator) {
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  mstack.push(3);
  mstack.push(8);

  MutantStack<int> mstack2;
  mstack2 = mstack;
  EXPECT_EQ(mstack2.size(), 4);
  EXPECT_EQ(mstack2.top(), 8);
  mstack2.pop();
  EXPECT_EQ(mstack2.size(), 3);
  EXPECT_EQ(mstack2.top(), 3);
}

//MutantStackのイテレーターのテスト
TEST(MutantStackTest, Iterator) {
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  mstack.push(3);
  mstack.push(8);

  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  EXPECT_EQ(*it, 5);
  ++it;
  EXPECT_EQ(*it, 17);
  ++it;
  EXPECT_EQ(*it, 3);
  ++it;
  EXPECT_EQ(*it, 8);
  ++it;
  EXPECT_EQ(it, ite);
}

//MutantStackのconstイテレーターのテスト
TEST(MutantStackTest, ConstIterator) {
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  mstack.push(3);
  mstack.push(8);

  MutantStack<int>::const_iterator it = mstack.begin();
  MutantStack<int>::const_iterator ite = mstack.end();
  EXPECT_EQ(*it, 5);
  ++it;
  EXPECT_EQ(*it, 17);
  ++it;
  EXPECT_EQ(*it, 3);
  ++it;
  EXPECT_EQ(*it, 8);
  ++it;
  EXPECT_EQ(it, ite);
}

//MutantStackのreverse_iteratorのテスト
TEST(MutantStackTest, ReverseIterator) {
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  mstack.push(3);
  mstack.push(8);

  MutantStack<int>::reverse_iterator it = mstack.rbegin();
  MutantStack<int>::reverse_iterator ite = mstack.rend();
  EXPECT_EQ(*it, 8);
  ++it;
  EXPECT_EQ(*it, 3);
  ++it;
  EXPECT_EQ(*it, 17);
  ++it;
  EXPECT_EQ(*it, 5);
  ++it;
  EXPECT_EQ(it, ite);
}

//MutantStackのconst_reverse_iteratorのテスト
TEST(MutantStackTest, ConstReverseIterator) {
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  mstack.push(3);
  mstack.push(8);

  MutantStack<int>::const_reverse_iterator it = mstack.rbegin();
  MutantStack<int>::const_reverse_iterator ite = mstack.rend();
  EXPECT_EQ(*it, 8);
  ++it;
  EXPECT_EQ(*it, 3);
  ++it;
  EXPECT_EQ(*it, 17);
  ++it;
  EXPECT_EQ(*it, 5);
  ++it;
  EXPECT_EQ(it, ite);
}
