/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * Stub library for libts_face_beautify_hal.so
 */

struct __tag_tsmakeupdata;
struct __tag_tsrect;

void ts_makeup_finish() {
}

int ts_makeup_skin_beauty(__tag_tsmakeupdata* src, __tag_tsmakeupdata* dst,
        const __tag_tsrect* rect, int w, int h) {
    return 0;
}
