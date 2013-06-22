/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SLComposeServiceViewController.h"

#import "VimeoComposeOptionViewDelegate-Protocol.h"

@class ACAccount, ACAccountStore, NSString, SLSheetAction, UIImageView, VimeoDetailsController;

@interface VimeoComposeViewController : SLComposeServiceViewController <VimeoComposeOptionViewDelegate>
{
    UIImageView *_logoView;
    SLSheetAction *_detailsAction;
    VimeoDetailsController *_detailsController;
    ACAccountStore *_accountStore;
    ACAccount *_vimeoAccount;
    NSString *_description;
}

@property(retain, nonatomic) NSString *description; // @synthesize description=_description;
@property(retain, nonatomic) ACAccount *vimeoAccount; // @synthesize vimeoAccount=_vimeoAccount;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)send;
- (BOOL)validateText:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)vimeoComposeOptionView:(id)arg1 didFinishWithDescription:(id)arg2;
- (id)sheetActions;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
