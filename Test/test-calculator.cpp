#include "pch.h"
#include "..\Calculator\Calculator.h"

TEST(TCalculator,check_brackets_1_true) 
{
	TCalculator tmp;
	tmp.SetInfix("()");
	EXPECT_EQ(true, tmp.CheckBrackets());
}

TEST(TCalculator, check_brackets_2_true)
{
	TCalculator tmp;
	tmp.SetInfix("(())");
	EXPECT_EQ(true, tmp.CheckBrackets());
}

TEST(TCalculator, check_brackets_3_true)
{
	TCalculator tmp;
	tmp.SetInfix("()()");
	EXPECT_EQ(true, tmp.CheckBrackets());
}

TEST(TCalculator, check_brackets_4_true)
{
	TCalculator tmp;
	tmp.SetInfix("(()())");
	EXPECT_EQ(true, tmp.CheckBrackets());
}

TEST(TCalculator, check_brakets_1_false) 
{
	TCalculator tmp;
	tmp.SetInfix("(");
	EXPECT_EQ(false, tmp.CheckBrackets());
}
TEST(TCalculator, check_brakets_2_false)
{
	TCalculator tmp;
	tmp.SetInfix(")");
	EXPECT_EQ(false, tmp.CheckBrackets());
}
TEST(TCalculator, check_brakets_3_false)
{
	TCalculator tmp;
	tmp.SetInfix("(()");
	EXPECT_EQ(false, tmp.CheckBrackets());
}
TEST(TCalculator, check_brakets_4_false)
{
	TCalculator tmp;
	tmp.SetInfix("())");
	EXPECT_EQ(false, tmp.CheckBrackets());
}
TEST(TCalculator, check_brakets_5_false)
{
	TCalculator tmp;
	tmp.SetInfix("()(");
	EXPECT_EQ(false, tmp.CheckBrackets());
}
TEST(TCalculator, check_brakets_6_false)
{
	TCalculator tmp;
	tmp.SetInfix("((()");
	EXPECT_EQ(false, tmp.CheckBrackets());
}
TEST(TCalculator, check_brakets_7_false)
{
	TCalculator tmp;
	tmp.SetInfix("(()))");
	EXPECT_EQ(false, tmp.CheckBrackets());
}

TEST(TCalculator, check_empty_string) 
{
	TCalculator tmp;
	EXPECT_ANY_THROW(tmp.CheckBrackets());
}
TEST(TCalculator, check_operator_1_true) 
{
	TCalculator tmp;
	tmp.SetInfix("2+2");
	EXPECT_EQ(true, tmp.CheckOperator());
}
TEST(TCalculator, check_operator_2_true)
{
	TCalculator tmp;
	tmp.SetInfix("(2+2)*2");
	EXPECT_EQ(true, tmp.CheckOperator());
}
TEST(TCalculator, check_operator_3_true)
{
	TCalculator tmp;
	tmp.SetInfix("(2+2)*1-(1/4)");
	EXPECT_EQ(true, tmp.CheckOperator());
}

TEST(TCalculator, check_operator_1_false)
{
	TCalculator tmp;
	tmp.SetInfix("2++2");
	EXPECT_EQ(false, tmp.CheckOperator());
}
TEST(TCalculator, check_operator_2_false)
{
	TCalculator tmp;
	tmp.SetInfix("(2+2)+*5");
	EXPECT_EQ(false, tmp.CheckOperator());
}

