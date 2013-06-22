/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABPasteboardControl.h>

@class ABNamePropertyGroup, ABStyleProvider, NSString, UIFont, UILabel, UIView;

@interface ABPersonNameDisplayView : ABPasteboardControl
{
    ABNamePropertyGroup *_namePropertyGroup;
    int _primaryProperty;
    NSString *_primaryPropertyFormattingCountryCode;
    float _minimumHeight;
    BOOL _alignOnBottom;
    UILabel *_headlineLabel;
    UILabel *_tagLineLabel;
    UILabel *_messageLabel;
    UILabel *_messageDetailLabel;
    UIFont *_messageFont;
    UIFont *_messageDetailFont;
    ABStyleProvider *_styleProvider;
    NSString *_customHeadline;
    NSString *_customTagLine;
    NSString *_customMessage;
    NSString *_customMessageDetail;
    UIView *_customMessageView;
}

@property(retain, nonatomic) UIView *customMessageView; // @synthesize customMessageView=_customMessageView;
@property(retain, nonatomic) UIFont *messageDetailFont; // @synthesize messageDetailFont=_messageDetailFont;
@property(retain, nonatomic) UIFont *messageFont; // @synthesize messageFont=_messageFont;
@property(copy, nonatomic) NSString *messageDetail; // @synthesize messageDetail=_customMessageDetail;
@property(copy, nonatomic) NSString *message; // @synthesize message=_customMessage;
@property(retain, nonatomic) ABStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(copy, nonatomic) NSString *tagLine; // @synthesize tagLine=_customTagLine;
@property(copy, nonatomic) NSString *headline; // @synthesize headline=_customHeadline;
@property(nonatomic) BOOL alignOnBottom; // @synthesize alignOnBottom=_alignOnBottom;
@property(nonatomic) float minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(copy, nonatomic) NSString *primaryPropertyFormattingCountryCode; // @synthesize primaryPropertyFormattingCountryCode=_primaryPropertyFormattingCountryCode;
@property(nonatomic) int primaryProperty; // @synthesize primaryProperty=_primaryProperty;
@property(retain, nonatomic) ABNamePropertyGroup *namePropertyGroup; // @synthesize namePropertyGroup=_namePropertyGroup;
- (float)_heightForLabelsForWidth:(float)arg1;
- (void)_setSubviewsHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setLabel:(id)arg1 highlighted:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_setFont:(id)arg1 isDetail:(BOOL)arg2;
- (void)_setMessageText:(id)arg1 isDetail:(BOOL)arg2;
- (id)_newLabelWithFont:(id)arg1 numberOfLines:(unsigned int)arg2;
- (id)_copyTagLine;
- (void)_appendString:(id)arg1 withFormatKey:(id)arg2 toTagLine:(id)arg3;
- (void)_updateTagLineText;
- (void)_updateHeadlineText;
- (id)_copyPrimaryValue;
- (void)copy:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)abMenuControllerWillHide;
- (void)abMenuControllerWillShow:(id)arg1;
- (BOOL)abShouldShowMenu;
- (void)_adjustLabelTextColorForPasteboardSelection:(BOOL)arg1;
- (void)reloadNameDataAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (struct CGSize)multilineLabel:(id)arg1 sizeThatFits:(struct CGSize)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initializeHeadlineAndTaglineIfNeeded;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

