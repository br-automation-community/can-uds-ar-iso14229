#pragma once

/* B&R / Automation Runtime system header for iso14229 custom builds. */

#include <assert.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <inttypes.h>

/* B&R headers */
#include <bur/plctypes.h>
#include "CAN_Lib.h"

/* Define ssize_t as 32-bit for Automation Runtime */
#if !defined(_SSIZE_T) && !defined(_SSIZE_T_DEFINED) && !defined(__ssize_t_defined) && !defined(_SSIZE_T_DECLARED)
typedef DINT ssize_t;
#define _SSIZE_T_DEFINED 1
#endif

/* CAN_Lib address fields use UDINT pointers. */
#ifndef BRCAN_ADR
#define BRCAN_ADR(p_) ((UDINT)(p_))
#endif
