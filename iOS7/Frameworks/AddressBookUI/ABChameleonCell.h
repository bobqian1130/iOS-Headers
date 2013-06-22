/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@interface ABChameleonCell : UITableViewCell
{
    int _abCellStyle;
    id <ABStyleProvider> _styleProvider;
    BOOL _hasConfiguredBackgroundViews;
}

@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) int abCellStyle; // @synthesize abCellStyle=_abCellStyle;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (void)_updateTextStylesForCellStyle;
- (void)_updateBackgroundViewsForCellStyleAndLocation;
- (void)dealloc;

@end

