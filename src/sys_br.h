#pragma once

/* B&R / Automation Runtime system header for iso14229 custom builds. */

#include <assert.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>

/* B&R headers */
#include <bur/plctypes.h>
#include "CAN_Lib.h"

/*
 * BR-specific UDS transport payload MTU.
 * Keep ISO-TP CAN frame handling unchanged while allowing larger payloads
 * for non-ISO-TP transports like DoIP in BR builds.
 */
#ifndef UDS_TP_MTU
#define UDS_TP_MTU (8192)
#endif

/* CAN_Lib address fields use UDINT pointers. */
#ifndef BRCAN_ADR
#define BRCAN_ADR(p_) ((UDINT)(p_))
#endif
