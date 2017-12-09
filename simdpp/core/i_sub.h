/*  Copyright (C) 2013-2014  Povilas Kanapickas <povilas@radix.lt>

    Distributed under the Boost Software License, Version 1.0.
        (See accompanying file LICENSE_1_0.txt or copy at
            http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef LIBSIMDPP_SIMDPP_CORE_I_SUB_H
#define LIBSIMDPP_SIMDPP_CORE_I_SUB_H

#ifndef LIBSIMDPP_SIMD_H
    #error "This file must be included through simd.h"
#endif

#include <simdpp/types.h>
#include <simdpp/detail/expr/i_sub.h>
#include <simdpp/core/detail/get_expr_uint.h>
#include <simdpp/core/detail/scalar_arg_impl.h>
#include <simdpp/core/detail/get_expr_uint.h>

namespace simdpp {
namespace SIMDPP_ARCH_NAMESPACE {

/** Subtracts 8-bit integer values.

    @code
    r0 = a0 - b0
    ...
    rN = aN - bN
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
template<unsigned N, class V1, class V2> SIMDPP_INL
typename detail::get_expr_uint<expr_isub, V1, V2>::type
        sub(const any_int8<N,V1>& a,
            const any_int8<N,V2>& b)
{
    typename detail::get_expr_uint<expr_isub, V1, V2>::type ret =
            { { a.wrapped(), b.wrapped() } };
    return ret;
}

SIMDPP_SCALAR_ARG_IMPL_INT_UNSIGNED(sub, expr_isub, any_int8, int8)

/** Subtracts 16-bit integer values.

    @code
    r0 = a0 - b0
    ...
    rN = aN - bN
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
template<unsigned N, class V1, class V2> SIMDPP_INL
typename detail::get_expr_uint<expr_isub, V1, V2>::type
        sub(const any_int16<N,V1>& a,
            const any_int16<N,V2>& b)
{
    typename detail::get_expr_uint<expr_isub, V1, V2>::type ret =
            { { a.wrapped(), b.wrapped() } };
    return ret;
}

SIMDPP_SCALAR_ARG_IMPL_INT_UNSIGNED(sub, expr_isub, any_int16, int16)

/** Subtracts 32-bit integer values.

    @code
    r0 = a0 - b0
    ...
    rN = aN - bN
    @endcode

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, ALTIVEC, 2}
*/
template<unsigned N, class V1, class V2> SIMDPP_INL
typename detail::get_expr_uint<expr_isub, V1, V2>::type
        sub(const any_int32<N,V1>& a,
            const any_int32<N,V2>& b)
{
    typename detail::get_expr_uint<expr_isub, V1, V2>::type ret =
            { { a.wrapped(), b.wrapped() } };
    return ret;
}

SIMDPP_SCALAR_ARG_IMPL_INT_UNSIGNED(sub, expr_isub, any_int32, int32)

/** Subtracts 64-bit integer values.

    @code
    r0 = a0 - b0
    ...
    rN = aN - bN
    @endcode

    @par 128-bit version:
    @icost{ALTIVEC, 5-6}

    @par 256-bit version:
    @icost{SSE2-AVX, NEON, 2}
    @icost{ALTIVEC, 10-11}
*/
template<unsigned N, class V1, class V2> SIMDPP_INL
typename detail::get_expr_uint<expr_isub, V1, V2>::type
        sub(const any_int64<N,V1>& a,
            const any_int64<N,V2>& b)
{
    typename detail::get_expr_uint<expr_isub, V1, V2>::type ret =
            { { a.wrapped(), b.wrapped() } };
    return ret;
}

SIMDPP_SCALAR_ARG_IMPL_INT_UNSIGNED(sub, expr_isub, any_int64, int64)


} // namespace SIMDPP_ARCH_NAMESPACE
} // namespace simdpp

#endif

