/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKTranscriptCell.h>

@class NSAttributedString, UILabel;

@interface CKTranscriptLabelCell : CKTranscriptCell
{
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)startZoomInAnimation;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)configureForRowObject:(id)arg1;

@end

