#ifndef DSAA_COUNT_INVERSIONS_HPP_
#define DSAA_COUNT_INVERSIONS_HPP_

namespace dsaa
{

template <typename T>
std::pair<std::vector<T>, std::uint32_t> countInversions(std::vector<T> &v, vec_size_t<T> begin, vec_size_t<T> end)
{
    if (end - begin == 0)
        return {{}, 0};

    if (end - begin == 1)
        return {{v.at(begin)}, 0};

    vec_size_t<T> mid = (begin + end) / 2;    

    auto pair_left = countInversions(v, begin, mid);
    const auto &left = pair_left.first;

    auto pair_right = countInversions(v, mid, end);
    const auto &right = pair_right.first;

    vec_size_t<T> i = 0, j = 0, split_inversions_num = 0;

    std::vector<T> result;

    for (vec_size_t<T> k = 0; k < end - begin; ++k)
    {
        if (i >= mid - begin)
        {
            result.push_back(right.at(j));
            ++j;
            continue;
        }

        if (j >= end - mid)
        {
            result.push_back(left.at(i));
            ++i;
            continue;
        }

        if (left.at(i) < right.at(j))
        {
            result.push_back(left.at(i));
            ++i;
        }
        else
        {
            result.push_back(right.at(j));
            ++j;
            split_inversions_num += mid - i - begin;
        }
    }

    return {result, pair_left.second + split_inversions_num + pair_right.second};
}

template <typename T>
std::pair<std::vector<T>, uint32_t> countInversions(std::vector<T> &v)
{
    return countInversions(v, 0, v.size());
}

} // namespace dsaa

#endif // DSAA_COUNT_INVERSIONS_HPP_