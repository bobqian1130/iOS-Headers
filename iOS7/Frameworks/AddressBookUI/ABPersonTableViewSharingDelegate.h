/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ABActionSheetDelegate, ABPersonViewControllerHelper, ABStyleProvider, NSString, UIImage;

@interface ABPersonTableViewSharingDelegate : NSObject
{
    ABActionSheetDelegate *_actionSheetDelegate;
    BOOL _shareMessageBodyIsHTML;
    ABStyleProvider *_styleProvider;
    ABPersonViewControllerHelper *_helper;
    NSString *_shareMessageBody;
    NSString *_shareMessageSubject;
    NSString *_shareLocationURL;
    UIImage *_shareLocationSnapshotImage;
    id _willTweetLocationCallback;
    id _willWeiboLocationCallback;
}

+ (id)_fakePersonForMergedPeople:(id)arg1;
@property(copy, nonatomic) id willWeiboLocationCallback; // @synthesize willWeiboLocationCallback=_willWeiboLocationCallback;
@property(copy, nonatomic) id willTweetLocationCallback; // @synthesize willTweetLocationCallback=_willTweetLocationCallback;
@property(retain, nonatomic) UIImage *shareLocationSnapshotImage; // @synthesize shareLocationSnapshotImage=_shareLocationSnapshotImage;
@property(copy, nonatomic) NSString *shareLocationURL; // @synthesize shareLocationURL=_shareLocationURL;
@property(copy, nonatomic) NSString *shareMessageSubject; // @synthesize shareMessageSubject=_shareMessageSubject;
@property(copy, nonatomic) NSString *shareMessageBody; // @synthesize shareMessageBody=_shareMessageBody;
@property(nonatomic) BOOL shareMessageBodyIsHTML; // @synthesize shareMessageBodyIsHTML=_shareMessageBodyIsHTML;
@property(nonatomic) ABPersonViewControllerHelper *helper; // @synthesize helper=_helper;
@property(retain, nonatomic) ABStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(readonly, nonatomic) BOOL canShareContact;
- (void)shareContact:(id)arg1;
- (void)shareContactFromButtonItem:(id)arg1;
- (void)shareContactFromButtonItem:(id)arg1 sender:(id)arg2;
@property(readonly, nonatomic) BOOL canWeibo;
@property(readonly, nonatomic) BOOL canTweet;
@property(readonly, nonatomic) BOOL canSendMail;
@property(readonly, nonatomic) BOOL canSendMMS;
- (void)shareActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)shareLocationOnWeibo:(id)arg1;
- (void)shareLocationOnTwitter:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)shareContactByTextMessage:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)shareContactByEmail:(id)arg1;
- (id)vCardFileName;
- (void)getVCardData:(id *)arg1 exportMode:(int)arg2 fileName:(id *)arg3;
- (BOOL)loadMessageUIAndReturnBundle:(id *)arg1;
- (BOOL)loadChatKitAndReturnBundle:(id *)arg1;
- (void)dealloc;
- (id)init;

@end

