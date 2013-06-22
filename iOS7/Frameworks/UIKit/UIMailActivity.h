/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIActivity.h>

#import "UIStateRestoring-Protocol.h"

@class MFMailComposeViewController, NSString;

@interface UIMailActivity : UIActivity <UIStateRestoring>
{
    BOOL _keyboardVisible;
    BOOL _sourceIsManaged;
    BOOL _hasAnyAccount;
    BOOL _hasFilteredAccount;
    NSString *_autosaveIdentifier;
    MFMailComposeViewController *_mailComposeViewController;
}

+ (int)activityCategory;
@property(retain, nonatomic) MFMailComposeViewController *mailComposeViewController; // @synthesize mailComposeViewController=_mailComposeViewController;
@property(nonatomic) BOOL hasFilteredAccount; // @synthesize hasFilteredAccount=_hasFilteredAccount;
@property(nonatomic) BOOL hasAnyAccount; // @synthesize hasAnyAccount=_hasAnyAccount;
@property(retain, nonatomic) NSString *autosaveIdentifier; // @synthesize autosaveIdentifier=_autosaveIdentifier;
@property(nonatomic) BOOL sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property(nonatomic) BOOL keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)_cleanup;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)setSubject:(id)arg1;
- (id)activityViewController;
- (void)_setSubject:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)autosaveWithHandler:(id)arg1;
- (BOOL)_restoreDraft;
- (id)_stateRestorationDraftIsAvailable;
- (void)_deleteMailDraftIdentifierRestorationArchive:(id)arg1;
- (void)_saveDraft:(id)arg1;
- (id)_mailDraftRestorationURL;
- (id)activityTitle;
- (id)_activityImage;
- (id)activityType;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) Class objectRestorationClass;
@property(readonly, nonatomic) id <UIStateRestoring> restorationParent;

@end

