#ifndef _HUNGARIAN_UNITTEST_H_
#define _HUNGARIAN_UNITTEST_H_

/*!
* \brief Test correctness of hungarian algorithm
*/
void hungarian_unittest();
int hungarian_test_infinite_loop();
int hungarian_test_zeros_filled_row();
int hungarian_test_zeros_filled_col();
int hungarian_test_square();
int hungarian_test_recth();
int hungarian_test_rectv();
int hungarian_test_negative_cost();

#endif // _HUNGARIAN_UNITTEST_H
