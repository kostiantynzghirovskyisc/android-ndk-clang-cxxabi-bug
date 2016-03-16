//
// Created by Kostiantyn Zghirovskyi on 3/16/16.
//

#include <string>
#ifdef __GNUC__
#include <cxxabi.h>
#endif

std::string getNdkString(const char *mangled) {
    int status;
    char *demangled = abi::__cxa_demangle(mangled, 0, 0, &status);
    std::string res = demangled;
    return res;
}