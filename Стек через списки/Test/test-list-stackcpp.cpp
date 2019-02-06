//#include "gtest/gtest.h"
#include "pch.h"
#include "..\Stack\List_stack.h"


TEST(TStack, push_elem1)
{
	TStack <int> s;
	ASSERT_NO_THROW(s.Push(1));
	ASSERT_NO_THROW(s.Push(2));
	
}

TEST(TStack, can_pop_elem1)
{
	TStack <int> s;
	for (int i = 0; i<3; i++)
		s.Push(i);
	ASSERT_NO_THROW(s.Pop());
	ASSERT_NO_THROW(s.Pop());
}
TEST(TStack, cant_pop_elem1)
{
	TStack <int> s;
	ASSERT_ANY_THROW(s.Pop());
}
TEST(TStack, can_top_elem1)
{
	TStack <int> s;
	for (int i = 0; i<3; i++)
		s.Push(i);
	EXPECT_EQ(2, s.Pop());
}
TEST(TStack, cant_top_elem1)
{
	TStack <int> s;
	ASSERT_ANY_THROW(s.Top());
}
TEST(TStack, stack_is_empty_return_true1)
{
	TStack <int> s;
	EXPECT_EQ(1, s.IsEmpty());
}

TEST(TStack, count_element_in_stack1) //Количество эелементов стеке
{
	TStack <int> s;
	for (int i = 0; i<3; i++)
		s.Push(i);
	EXPECT_EQ(2, s.Count());
}
TEST(TStack, count_element_in_stack2) //Количество эелементов стеке
{
	TStack <int> s;
	EXPECT_EQ(0, s.Count());
}
TEST(TStack, clear_stack1) 
{
	TStack <int> s;
	for (int i = 0; i<3; i++)
		s.Push(i);
	s.Clear();
	EXPECT_EQ(0, s.Count());
}

