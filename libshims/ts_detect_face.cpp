/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * Stub library for libts_detected_face_hal.so
 */

struct __tag_tsmakeupdata;
struct __tag_tsrect;

void* ts_detectface_create_context() {
    return nullptr;
}

int ts_detectface_detect(void* ctx, __tag_tsmakeupdata* data) {
    return 0;
}

int ts_detectface_get_face_info(void* ctx, int idx,
        __tag_tsrect* face, __tag_tsrect* left_eye,
        __tag_tsrect* right_eye, __tag_tsrect* mouth) {
    return 0;
}

void ts_detectface_destroy_context(void** ctx) {
    if (ctx) *ctx = nullptr;
}
