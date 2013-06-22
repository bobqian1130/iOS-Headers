/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLayoutManagerTextBlockRowArrayCache, NSMutableArray, NSRunStorage, NSTextContainer;

@interface NSExtraLMData : NSObject
{
    NSRunStorage *_attachmentSizesRun;
    struct CGRect _currentAttachmentRect;
    unsigned int _currentAttachmentIndex;
    id _fillHoleLock;
    NSRunStorage *_fragmentRunsExtras;
    id _temporaryAttributes;
    NSTextContainer *_firstTextContainer;
    struct __CFDictionary *_textContainerIndexes;
    struct __CFDictionary *_textContainerGlyphIndexes;
    int _typesetterBehavior;
    struct CGRect _cachedFontBounds;
    float _cachedUnderlineThickness;
    float _cachedUnderlinePosition;
    float _cachedUnderlineAdjustment;
    struct _NSRange _cachedUnderlineRange;
    NSMutableArray *_blockRunsArray;
    float _hyphenationFactor;
    NSMutableArray *_insertionPointCache;
    struct _NSGlyphTree _glyphTree;
    struct _NSLayoutTree _layoutTree;
    struct _NSRange _firstTextViewVisibleCharRange;
    struct CGSize _firstTextViewVisibleOffset;
    struct _NSRange _lastInvalidatedCharRange;
    float _lastInvalidatedLongitudinalPosition;
    NSTextContainer *_lastInvalidatedTextContainer;
    NSLayoutManagerTextBlockRowArrayCache *_rowArrayCache;
    struct __lmFlags2 {
        unsigned int glyphCause:6;
        unsigned int layoutCause:6;
        unsigned int delegateRespondsToTempAttrs:1;
        unsigned int processingFirstTextViewVisible:1;
        unsigned int temporarySpacingChange:1;
        unsigned int alwaysDrawsActive:1;
        unsigned int usesOldShowPackedGlyphs:1;
        unsigned int drawsUnderlinesLikeWebKit:1;
        unsigned int drawsDebugBaselines:1;
        unsigned int reserved:13;
    } _lmFlags2;
}

@end

