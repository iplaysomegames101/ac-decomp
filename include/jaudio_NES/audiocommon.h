#ifndef AUDIOCOMMON_H
#define AUDIOCOMMON_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define S16_MIN (-0x8000)
#define S16_MAX (0x7FFF)

#define AUDIO_ARAM_SIZE 0x400000 /* 4MB */
#define AUDIO_ARAM_HEAP_SIZE 0xC000

typedef enum DSPBUF_EVENTS {
    DSPBUF_EVENTS_0 = 0,
    DSPBUF_EVENTS_1 = 1,
    DSPBUF_EVENTS_2 = 2,
} DSPBUF_EVENTS;

typedef enum SampleMedium {
    /* 0 */ MEDIUM_RAM,
    /* 1 */ MEDIUM_UNK,
    /* 2 */ MEDIUM_CART,
    /* 3 */ MEDIUM_DISK_DRIVE,
    /* 5 */ MEDIUM_RAM_UNLOADED = 5
} SampleMedium;

typedef enum AudioCacheLoadType {
    /* 0 */ CACHE_LOAD_PERMANENT,
    /* 1 */ CACHE_LOAD_PERSISTENT,
    /* 2 */ CACHE_LOAD_TEMPORARY,
    /* 3 */ CACHE_LOAD_EITHER,
    /* 4 */ CACHE_LOAD_EITHER_NOSYNC
} AudioCacheLoadType;

#ifdef __cplusplus
}
#endif

#endif