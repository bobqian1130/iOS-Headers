/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITextField.h"

@class UILabel;

@interface SBPasscodeTextField : UITextField
{
    float _letterSpacing;
    BOOL _usesLargeClearButton;
    UILabel *_hiddenLabel;
}

@property(nonatomic) BOOL usesLargeClearButton; // @synthesize usesLargeClearButton=_usesLargeClearButton;
@property(nonatomic) float letterSpacing; // @synthesize letterSpacing=_letterSpacing;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)_handleKeyUIEvent:(id)arg1;
- (id)_style;
- (void)_endedEditing;
- (void)attachFieldEditor:(id)arg1;
- (id)createTextLabelWithTextColor:(id)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (void)dealloc;

@end

