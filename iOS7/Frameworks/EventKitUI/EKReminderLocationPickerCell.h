/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class UIButton, UIImageView;

@interface EKReminderLocationPickerCell : UITableViewCell
{
    UIImageView *_spinner;
    UIImageView *_checkmark;
    UIButton *_failureButton;
    UIButton *_contactsButton;
    id <EKReminderLocationPickerCellButtonHandler> _buttonHandler;
    id <EKStyleProvider> _styleProvider;
    int _locationPickerCellAccessoryType;
}

@property(nonatomic) int locationPickerCellAccessoryType; // @synthesize locationPickerCellAccessoryType=_locationPickerCellAccessoryType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_failPressedImage;
- (id)_failImage;
- (id)_exclamationGlyphImage;
- (id)initWithStyle:(int)arg1 buttonHandler:(id)arg2 styleProvider:(id)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

