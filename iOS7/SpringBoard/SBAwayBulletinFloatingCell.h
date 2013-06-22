/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAwayBulletinCell.h"

@interface SBAwayBulletinFloatingCell : SBAwayBulletinCell
{
    BOOL _hideIcon;
}

+ (Class)contentViewClass;
+ (BOOL)_shouldLayoutButtonsBelowForContentWidth:(float)arg1 buttonLabels:(id)arg2;
+ (float)_paddedHeightForButton:(id)arg1;
+ (float)_cellContentExtraPadding;
+ (float)_cellContentTopPadding;
+ (float)_cellContentRightPadding;
+ (float)_cellContentLeftPadding;
+ (float)_cellIconLeftPadding;
+ (float)_buttonHorizontalPadding;
+ (float)_buttonVerticalPadding;
+ (float)_buttonVerticalInset;
+ (float)_buttonHorizontalInset;
+ (id)_buttonFont;
+ (id)_buttonBackgroundImage;
+ (id)_snoozeButtonBackgroundImage;
+ (float)rowHeightForSubtitle:(id)arg1 message:(id)arg2 maxLines:(unsigned int)arg3 attachmentText:(id)arg4 imageSize:(struct CGSize)arg5 rowWidth:(float)arg6;
+ (float)_rowHeightForContentHeight:(float)arg1;
+ (float)_contentWidthForRowWidth:(float)arg1 leaveRoomForIcon:(BOOL)arg2;
- (BOOL)_shouldUseCancelButtonImageForIndex:(int)arg1;
- (BOOL)_shouldUseSnoozeButtonImageForIndex:(int)arg1;
- (BOOL)_createsLockBarEarly;
- (void)layoutSubviews;
- (struct CGRect)_contentRect;
- (BOOL)_drawsSeparator;
- (id)_lockBar;
- (void)setUnlockActionContext:(id)arg1;
- (void)setAttachmentImage:(id)arg1;
- (BOOL)_hasBackgroundColor;
- (void)_createContentView;
- (void)_getButtonWidth:(float *)arg1 inset:(float *)arg2;
- (float)_cellContentLeftPadding;

@end

