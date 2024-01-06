#ifndef COMMON_OUTPUT_HPP_
#define COMMON_OUTPUT_HPP_

#include <vector>
#include <iostream>

namespace common
{

template <typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &v)
{
    for (const auto &e: v)
        os << e << " ";
    return os;
}

} // namespace common

#endif // COMMON_OUTPUT_HPP_