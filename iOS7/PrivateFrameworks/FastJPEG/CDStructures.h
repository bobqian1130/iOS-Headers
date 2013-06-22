/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct entryList {
    struct lruEntry *tqh_first;
    struct lruEntry **tqh_last;
};

struct ffjdec;

struct jpegDecoder {
    struct ffjdec *_field1;
    id _field2;
};

struct lruEntry {
    id _field1;
    int _field2;
    struct {
        struct lruEntry *_field1;
        struct lruEntry **_field2;
    } _field3;
};

