#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
//typename std::enable_if<std::is_class<T>::value, typename T::iterator>::typeなどを使うと、
//T がイテレータ型を持つコンテナ型にのみ適用できるように制約を設定できる(ただし、C++11以降)
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::exception();
    return it;
}

#endif