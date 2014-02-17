/*  Author: R. Bourquin
 *  Copyright: (C) 2014 R. Bourquin
 *  License: GNU GPL v2 or above
 *
 *  A library of helper functions to search for
 *  Kronrod extensions of Gauss quadrature rules.
 */

#ifndef __HH__switch
#define __HH__switch

#include "flint/flint.h"
#include "flint/fmpq.h"

#include "polynomials.h"
#include "numerics.h"

inline void integrate(fmpq_t M, const int n);
inline long validate_roots(const fmpcb_ptr, const long, const long, const int);
inline long validate_weights(const fmpcb_ptr, const long, const long, const int);


inline void integrate(fmpq_t M, const int n) {
    integrate_hermite_pro(M, n);
}

inline long validate_roots(const fmpcb_ptr roots,
			   const long n,
			   const long prec,
			   const int loglevel) {
    return validate_real_roots(roots, n, prec, loglevel);
}

inline long validate_weights(const fmpcb_ptr weights,
			     const long n,
			     const long prec,
			     const int loglevel) {
    return validate_positive_weights(weights, n, prec, loglevel);
}

#endif