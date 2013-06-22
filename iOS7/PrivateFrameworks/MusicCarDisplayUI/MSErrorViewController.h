/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSString, UIButton, UILabel;

@interface MSErrorViewController : UIViewController
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_okButton;
    NSString *_errorTitle;
    NSString *_errorMessage;
}

@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
- (void).cxx_destruct;
- (void)okButtonTapped:(id)arg1;
- (void)updateMessageLabelText;
- (void)updateTitleLabelText;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

@end

