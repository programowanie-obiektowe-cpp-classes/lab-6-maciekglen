#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval;

    auto F = [&](Human& h) {
        h.birthday();
        retval.push_back(h.isMonster() ? 'n' : 'y');
    };
    std::for_each(people.rbegin(), people.rend(), F);
    return retval;
}
