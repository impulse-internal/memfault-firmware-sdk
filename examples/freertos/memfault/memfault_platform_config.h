//! @file
//!
//! Copyright (c) Memfault, Inc.
//! See License.txt for details
//!
//! Application platform config. Add Memfault configs here.

#pragma once

#define MEMFAULT_USE_GNU_BUILD_ID 1
#define MEMFAULT_PLATFORM_COREDUMP_STORAGE_RAM_SIZE 8192
#define MEMFAULT_COREDUMP_COLLECT_LOG_REGIONS 1
#define MEMFAULT_COREDUMP_COLLECT_HEAP_STATS 1
#define MEMFAULT_FREERTOS_PORT_HEAP_STATS_ENABLE 1
#define MEMFAULT_COREDUMP_HEAP_STATS_LOCK_ENABLE 0
#define MEMFAULT_METRICS_HEARTBEAT_INTERVAL_SECS 60
