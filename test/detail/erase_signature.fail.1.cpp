// Copyright Louis Dionne 2017
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)

#include <dyno/concept.hpp>
#include <dyno/detail/erase_signature.hpp>


// MESSAGE[dyno::T may not be passed by value; it is only a placeholder]
using T = dyno::detail::erase_signature<void (dyno::T)>::type;

int main() { }
