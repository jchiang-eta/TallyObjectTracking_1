#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Kalman_UnitTest
{
	TEST_CLASS(Matrix_Unittest)
	{
	public:	
		TEST_METHOD(Test_matrix_inverse)
		{
			Assert::AreEqual(test_matrix_inverse(), 1);
		}
		TEST_METHOD(Test_matrix_copy_cols_and_rows)
		{
			Assert::AreEqual(test_matrix_copy_cols_and_rows(), 1);
		}
		TEST_METHOD(Test_matrix_multiply_aux)
		{
			Assert::AreEqual(test_matrix_multiply_aux(), 1);
		}
		TEST_METHOD(Test_matrix_multiply_transb)
		{
			Assert::AreEqual(test_matrix_multiply_transb(), 1);
		}
		TEST_METHOD(Test_matrix_multscale_transb)
		{
			Assert::AreEqual(test_matrix_multscale_transb(), 1);
		}
		TEST_METHOD(Test_matrix_multadd_transb)
		{
			Assert::AreEqual(test_matrix_multadd_transb(), 1);
		}
		TEST_METHOD(Test_matrix_multiply_vector)
		{
			Assert::AreEqual(test_matrix_multiply_vector(), 1);
		}
		TEST_METHOD(Test_matrix_multiplyadd_vector)
		{
			Assert::AreEqual(test_matrix_multiplyadd_vector(), 1);
		}
		TEST_METHOD(Test_matrix_add_inplace)
		{
			Assert::AreEqual(test_matrix_add_inplace(), 1);
		}
		TEST_METHOD(Test_matrix_sub_inplace_b)
		{
			Assert::AreEqual(test_matrix_sub_inplace_b(), 1);
		}
		TEST_METHOD(Test_matrix_sub)
		{
			Assert::AreEqual(test_matrix_sub(), 1);
		}
		TEST_METHOD(Test_matrix_copy)
		{
			Assert::AreEqual(test_matrix_copy(), 1);
		}
	};
	TEST_CLASS(Counting_Unittest)
	{
	public:
		TEST_METHOD(Test_cnt_2pt_line)
		{
			Assert::AreEqual(cnt_2pt_line_unittest(), 1);
		}
		TEST_METHOD(Test_cnt_2pt_line_inverted)
		{
			Assert::AreEqual(cnt_2pt_line_inverted_unittest(), 1);
		}
		TEST_METHOD(Test_cnt_5pt_line)
		{
			Assert::AreEqual(cnt_5pt_line_unittest(), 1);
		}
		TEST_METHOD(Test_cnt_5pt_circle_draw)
		{
			Assert::AreEqual(cnt_5pt_circle_draw_unittest(), 1);
		}
		TEST_METHOD(Test_cnt_6pt_concave_with_negative)
		{
			Assert::AreEqual(cnt_6pt_concave_with_negative_unittest(), 1);
		}
		TEST_METHOD(Test_cnt_2pt_line_unittest_with_negative)
		{
			Assert::AreEqual(cnt_2pt_line_unittest_with_negative(), 1);
		}
		TEST_METHOD(Test_cnt_6pt_zigzag_outofrange)
		{
			Assert::AreEqual(cnt_6pt_zigzag_outofrange_unittest(), 1);
		}
		TEST_METHOD(Test_cnt_5pt_circle_draw_hist)
		{
			Assert::AreEqual(cnt_5pt_circle_draw_hist_unittest(), 1);
		}
		TEST_METHOD(Test_cnt_6pt_hist_offset)
		{
			Assert::AreEqual(cnt_6pt_hist_offset_unittest(), 1);
		}
	};
	TEST_CLASS(Hungarian_Unittest)
	{
	public:
		TEST_METHOD(Test_hungarian_test_infinite_loop)
		{
			Assert::AreEqual(hungarian_test_infinite_loop(), 1);
		}
		TEST_METHOD(Test_hungarian_test_zeros_filled_row)
		{
			Assert::AreEqual(hungarian_test_zeros_filled_row(), 1);
		}
		TEST_METHOD(Test_hungarian_test_zeros_filled_col)
		{
			Assert::AreEqual(hungarian_test_zeros_filled_col(), 1);
		}
		TEST_METHOD(Test_hungarian_test_square)
		{
			Assert::AreEqual(hungarian_test_square(), 1);
		}
		TEST_METHOD(Test_hungarian_test_recth)
		{
			Assert::AreEqual(hungarian_test_recth(), 1);
		}
		TEST_METHOD(Test_hungarian_test_rectv)
		{
			Assert::AreEqual(hungarian_test_rectv(), 1);
		}
		TEST_METHOD(Test_hungarian_test_negative_cost)
		{
			Assert::AreEqual(hungarian_test_negative_cost(), 1);
		}
	};
	TEST_CLASS(Postprocessing_Unittest)
	{
	public:
		TEST_METHOD(Test_filtering)
		{
			Assert::AreEqual(filtering_unittest(), 1);
		}
		TEST_METHOD(Test_filtering_1)
		{
			Assert::AreEqual(filtering_unittest_1(), 1);
		}
		TEST_METHOD(Test_nms)
		{
			Assert::AreEqual(nms_unittest(), 1);
		}
	};
}
