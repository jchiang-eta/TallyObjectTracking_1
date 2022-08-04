#define FLOAT_EQUAL_PRECISION 0.001

// main test (includes all partial tests)
void quant_unittest();

// partial tests
int dequantize_class_unittest();
void dequantize_unittest();
void quantize_unittest();
int dequantize_by_index_unittest();