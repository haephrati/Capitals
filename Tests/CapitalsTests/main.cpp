#define main unused_capitals_main
#include "../../CH10 - Capitals.cpp"

#include <cstdio>
#include <cstdlib>
#include <map>
#include <string>

static void Fail(const char* msg)
{
    std::printf("FAIL %s\n", msg);
    std::exit(1);
}

int main()
{
    if (!compare_no_case(L"France", L"france"))
        Fail("case");
    if (compare_no_case(L"France", L"Spain"))
        Fail("diff");
    std::map<std::wstring, std::wstring> capitals;
    add_capital(capitals, L"Italy", L"Rome");
    if (capitals[L"Italy"] != L"Rome")
        Fail("add");
    std::printf("OK CapitalsTests\n");
    return 0;
}
