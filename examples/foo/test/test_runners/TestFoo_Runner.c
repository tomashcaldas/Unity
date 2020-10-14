#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Foo)
{
    RUN_TEST_CASE(Foo, test_foo1);
    RUN_TEST_CASE(Foo, test_foo2);
}

static void RunAllTests(void)
{
    RUN_TEST_GROUP(Foo);
}

int main(int argc, const char * argv[])
{
    return UnityMain(argc, argv, RunAllTests);
}
