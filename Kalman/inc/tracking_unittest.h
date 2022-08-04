#ifndef _TRACKING_UNITTESTING_H
#define _TRACKING_UNITTESTING_H

#include <stdint.h>

#include "bbox_types.h"
#include "vec_types.h"

void tracking_unittest();

int test_match_filter();
void test_tracking_1();
int test_tracking_2();
int test_tracking_clearing();
int bboxcorner2centroid_unittest();

#endif // !_TRACKING_UNITTESTING_H

