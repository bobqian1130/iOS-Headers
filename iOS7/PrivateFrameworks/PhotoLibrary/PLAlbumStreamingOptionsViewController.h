/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLComposeRecipientViewControllerDelegate-Protocol.h"
#import "PLInvitationRecordsObserver-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, PLCloudSharedAlbum, PLCloudSharedAlbumInvitationRecord, PLComposeRecipientViewController, UIBarButtonItem, UISwitch, UITableView;

@interface PLAlbumStreamingOptionsViewController : UIViewController <PLComposeRecipientViewControllerDelegate, PLInvitationRecordsObserver, UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate>
{
    PLCloudSharedAlbum *_album;
    NSArray *_albumAssets;
    NSString *_albumName;
    int _optionsMode;
    id <PLAlbumStreamingOptionsViewControllerDelegate> _delegate;
    PLComposeRecipientViewController *_composeRecipientController;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UITableView *_optionsTableView;
    UISwitch *_wantsPublicWebsiteSwitch;
    UISwitch *_wantsMultipleContributorsSwitch;
    UISwitch *_wantsAcceptCloudNotificationSwitch;
    BOOL _changingValueFromControl;
    BOOL _adjustedInsetsForKeyboard;
    BOOL _streamOwner;
    unsigned int _addSubscribersRow;
    BOOL _isPresentedModally;
    NSArray *_visibleInvitationRecords;
    NSString *_visiblePublicURL;
    BOOL _showShareLink;
    BOOL __shouldScrollToTopOnNextViewLayout;
    PLCloudSharedAlbumInvitationRecord *__selectedSubscriberInvitationRecord;
}

@property(nonatomic, setter=_setShouldScrollToTopOnNextViewLayout:) BOOL _shouldScrollToTopOnNextViewLayout; // @synthesize _shouldScrollToTopOnNextViewLayout=__shouldScrollToTopOnNextViewLayout;
@property(retain, nonatomic, setter=_setSelectedSubscriberInvitationRecord:) PLCloudSharedAlbumInvitationRecord *_selectedSubscriberInvitationRecord; // @synthesize _selectedSubscriberInvitationRecord=__selectedSubscriberInvitationRecord;
@property(nonatomic) BOOL streamOwner; // @synthesize streamOwner=_streamOwner;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) PLCloudSharedAlbum *album; // @synthesize album=_album;
@property(retain, nonatomic) NSArray *albumAssets; // @synthesize albumAssets=_albumAssets;
@property(nonatomic) BOOL isPresentedModally; // @synthesize isPresentedModally=_isPresentedModally;
@property(nonatomic) id <PLAlbumStreamingOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)backingNavigationControllerForComposeRecipientViewController:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)invitationRecordsDidChange:(id)arg1;
- (void)_removeSelectedSubscriber;
- (void)_displayConfirmationForRemovalOfSelectedSubscriber;
- (void)_resendInvitationToSelectedSubscriber;
- (void *)_personMatchingEmail:(id)arg1 orPhone:(id)arg2 matchingProperty:(out int *)arg3 matchingValueIdentifier:(out int *)arg4;
- (id)_newPersonViewControllerWithEmail:(id)arg1 phone:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 canResendInvitation:(BOOL)arg5 canRemoveSubscriber:(BOOL)arg6;
- (void)_updateMultipleContributorsState;
- (void)_updatePublicURLStateIfNecessaryAnimated:(BOOL)arg1;
- (id)_visibleInvitationRecordsForStreamOwner:(BOOL)arg1;
- (void)_setShowingMultipleContributorSpinner:(BOOL)arg1;
- (void)_setShowingPublicURLActivitySpinner:(BOOL)arg1;
- (BOOL)_shouldShowPublicURLActivitySpinner;
- (BOOL)_multipleContributorsEnabled;
- (BOOL)_publicURLEnabled;
- (void)_displayActivitySheet;
- (void)_displayDeleteConfirmation:(id)arg1;
- (void)_deletePhotoStream;
- (void)_createNewCloudSharedAlbum;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_changeWantsMultipleContributors:(id)arg1;
- (void)_changeWantsAcceptCloudNotification:(id)arg1;
- (void)_changeWantsPublicWebsite:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_handleCompletionWithReason:(int)arg1;
- (id)_suppresionContexts;
- (BOOL)_appAllowsSupressionOfAlerts;
- (struct CGSize)contentSizeForViewInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)_updateWantsMultipleContributorsField;
- (void)_updateWantsAcceptCloudNotificationField;
- (void)_updateWantsPublicWebsiteField;
- (void)_updateAllControls;
- (void)dealloc;
- (id)initForEditOpertationForAlbum:(id)arg1;
- (id)initForAlbumCreationOperationWithAssets:(id)arg1;
- (id)_initWithOptionsMode:(int)arg1 withAlbum:(id)arg2 andAssets:(id)arg3;

@end

