//------------------------------------------------------------------------------
/*
    This file is part of lehuod: https://github.com/lehuo/lehuod
    Copyright (c) 2016 Lehuo

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

#ifndef LEHUO_PROTOCOL_SYSTEMPARAMETERS_H_INCLUDED
#define LEHUO_PROTOCOL_SYSTEMPARAMETERS_H_INCLUDED

#include <cstdint>
#include <string>

namespace ripple {

// Various protocol and system specific constant globals.

/* The name of the system. */
static inline
std::string const&
systemName ()
{
    static std::string const name = "lehuo";
    return name;
}

/** Configure the initial native currency for lehuo. */
static
std::uint64_t const
SYSTEM_CURRENCY_INITIAL = 500 * 1000 * 1000;

/** Number of drops per 1 LEH */
static
std::uint64_t const
SYSTEM_CURRENCY_PARTS = 1000000;

/** Number of drops in the genesis account. */
static
std::uint64_t const
SYSTEM_CURRENCY_START = SYSTEM_CURRENCY_INITIAL * SYSTEM_CURRENCY_PARTS;

/** Period 1 for inflation. */
static
std::uint64_t const
SYSTEM_INFLATE_PERIOD_1 = 31536000ull;  // First year.

static
std::uint64_t const
SYSTEM_INFLATE_DAY_1 = 1;

static
std::uint64_t const
SYSTEM_INFLATE_MONTH_1 = 10;

static
std::uint64_t const
SYSTEM_INFLATE_AMOUNT_1 = 30 * 1000 * 1000 * SYSTEM_CURRENCY_PARTS;

/** Period 2 for inflation. */
static
std::uint64_t const
SYSTEM_INFLATE_PERIOD_2 = 2 * 31536000ull; //  Next two years.

static
std::uint64_t const
SYSTEM_INFLATE_DAY_2 = 1;

static
std::uint64_t const
SYSTEM_INFLATE_MONTH_2 = 10;

static
std::uint64_t const
SYSTEM_INFLATE_AMOUNT_2 = 10 * 1000 * 1000 * SYSTEM_CURRENCY_PARTS;

/* The currency code for the native currency. */
static inline
std::string const&
systemCurrencyCode ()
{
    static std::string const code = "LEH";
    return code;
}

} // lehuo

#endif
