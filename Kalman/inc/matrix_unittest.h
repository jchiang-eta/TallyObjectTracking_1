#ifndef _MATRIX_UNITTESTS_H_
#define _MATRIX_UNITTESTS_H_
/*!
* \brief Unit tests for matrix operations
*/

void matrix_unittest();
int test_matrix_inverse();
int test_matrix_copy_cols_and_rows();
int test_matrix_multiply_aux();
int test_matrix_multiply_transb();
int test_matrix_multscale_transb();
int test_matrix_multadd_transb();
int test_matrix_multiply_vector();
int test_matrix_multiplyadd_vector();
int test_matrix_add_inplace();
int test_matrix_sub_inplace_b();
int test_matrix_sub();
int test_matrix_copy();


#endif