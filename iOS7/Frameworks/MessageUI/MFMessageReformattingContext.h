/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DOMDocument, DOMNode, DOMRange, NSArray, NSMutableArray;

@interface MFMessageReformattingContext : NSObject
{
    DOMDocument *_document;
    DOMNode *_body;
    NSMutableArray *_changes;
    float _maximumWidth;
    float _meanWidth;
    float _widthDeviation;
    BOOL _hasAnyLeftFloat;
    NSArray *_rightFloats;
    BOOL _floatsNeedUpdate;
    BOOL _metricsNeedUpdate;
    BOOL _documentContainsAnyWebKitTransform;
    float _minimumRescalingFactor;
    DOMRange *_firstTextRange;
}

@property(retain, nonatomic) DOMRange *firstTextRange; // @synthesize firstTextRange=_firstTextRange;
@property(nonatomic) float minimumRescalingFactor; // @synthesize minimumRescalingFactor=_minimumRescalingFactor;
@property(readonly, nonatomic) BOOL didChangeDocument;
- (void)_rollBackChange:(id)arg1;
- (void)rollBackLastChangeForElement:(id)arg1;
- (void)rollBackAllChanges;
- (void)changeProprety:(id)arg1 ofElement:(id)arg2 toValue:(id)arg3 priority:(id)arg4;
- (BOOL)changeMarginOfElement:(id)arg1 priority:(id)arg2 usingBlock:(id)arg3;
- (BOOL)changeSizeOfElement:(id)arg1 priority:(id)arg2 usingBlock:(id)arg3;
- (BOOL)rescaleElement:(id)arg1 withScale:(float)arg2;
- (BOOL)resizeElement:(id)arg1 withScale:(float)arg2 verificationBlock:(id)arg3;
- (struct CGRect)boundingBoxOf:(id)arg1;
- (void)_updateMetricsIfNecessary;
@property(readonly, nonatomic) float widthDeviation;
@property(readonly, nonatomic) float meanWidth;
@property(readonly, nonatomic) float maximumWidth;
- (void)_updateFloatsIfNecessary;
@property(readonly, nonatomic) NSArray *rightFloats;
@property(readonly, nonatomic) BOOL hasAnyRightFloat;
@property(readonly, nonatomic) BOOL hasAnyLeftFloat;
@property(readonly, nonatomic) DOMNode *body;
@property(readonly, nonatomic) DOMDocument *document;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end

