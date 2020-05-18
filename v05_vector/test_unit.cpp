#include "vector_header.h"
#include "acutest.h"

void test_add(void){
    TEST_CHECK_(IntToStr(2) == "2", "IntToStr(%d)==(%s)", 2, "2");
    TEST_CHECK_(IntToStr(20) == "20", "IntToStr(%d)==(%s)", 20, "20");
    TEST_CHECK_(IntToStr(1000) == "1000", "IntToStr(%d)==(%s)", 1000, "1000");
}

TEST_LIST = {
    {"string IntToStr(int);",test_add},
    {0}
};
