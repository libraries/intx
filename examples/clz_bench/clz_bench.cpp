// intx: extended precision integer library.
// Copyright 2019-2020 Pawel Bylica.
// Licensed under the Apache License, Version 2.0.

#include <intx/intx.hpp>

int main(int argc, char**)
{
    int s = 0;
    for (int i = 0; i < 2048; i++) {
        s += intx::clz(intx::uint128{i});
    }
    if (s != 241663) {
        return 1;
    }
    return 0;
}
