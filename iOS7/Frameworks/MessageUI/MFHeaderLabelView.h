/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UILabel.h"

@interface MFHeaderLabelView : UILabel
{
    unsigned int _highlighted:1;
    unsigned int _drawsLetterPress:1;
}

+ (id)_defaultColor;
- (struct CGPoint)baselinePoint;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
- (id)effectiveTextColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

