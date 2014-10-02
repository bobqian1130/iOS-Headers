//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "SSXPCCoding.h"

@class NSArray, NSDictionary, NSNumber, NSString, SSURLBagContext;

@interface SSAuthenticationContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying>
{
    NSString *_accountName;
    BOOL _accountNameEditable;
    int _accountScope;
    BOOL _allowsBioAuthentication;
    BOOL _allowsBootstrapCellularData;
    BOOL _allowsRetry;
    BOOL _canCreateNewAccount;
    BOOL _canSetActiveAccount;
    NSString *_clientIdentifierHeader;
    BOOL _demoAccount;
    BOOL _displaysOnLockScreen;
    NSDictionary *_httpHeaders;
    NSString *_initialPassword;
    BOOL _persistsAcrossDeviceLock;
    BOOL _persistsPasswordFallback;
    NSString *_preferredITunesStoreClient;
    int _promptStyle;
    NSString *_reasonDescription;
    NSDictionary *_requestParameters;
    NSNumber *_requiredUniqueIdentifier;
    BOOL _shouldCreateNewSession;
    BOOL _shouldFollowAccountButtons;
    BOOL _shouldIgnoreProtocol;
    BOOL _shouldSuppressDialogs;
    NSDictionary *_signupRequestParameters;
    int _tokenType;
    NSArray *_userAgentComponents;
}

+ (id)contextForSignIn;
@property(readonly, copy, nonatomic) NSArray *userAgentComponents; // @synthesize userAgentComponents=_userAgentComponents;
@property(readonly, nonatomic) int tokenType; // @synthesize tokenType=_tokenType;
@property(readonly, copy, nonatomic) NSDictionary *signupRequestParameters; // @synthesize signupRequestParameters=_signupRequestParameters;
@property(readonly, nonatomic) BOOL shouldSuppressDialogs; // @synthesize shouldSuppressDialogs=_shouldSuppressDialogs;
@property(readonly, nonatomic) BOOL shouldIgnoreProtocol; // @synthesize shouldIgnoreProtocol=_shouldIgnoreProtocol;
@property(readonly, nonatomic) BOOL shouldFollowAccountButtons; // @synthesize shouldFollowAccountButtons=_shouldFollowAccountButtons;
@property(readonly, nonatomic) BOOL shouldCreateNewSession; // @synthesize shouldCreateNewSession=_shouldCreateNewSession;
@property(readonly, retain, nonatomic) NSNumber *requiredUniqueIdentifier; // @synthesize requiredUniqueIdentifier=_requiredUniqueIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *requestParameters; // @synthesize requestParameters=_requestParameters;
@property(readonly, copy, nonatomic) NSString *reasonDescription; // @synthesize reasonDescription=_reasonDescription;
@property(readonly, nonatomic) int promptStyle; // @synthesize promptStyle=_promptStyle;
@property(readonly, copy, nonatomic) NSString *preferredITunesStoreClient; // @synthesize preferredITunesStoreClient=_preferredITunesStoreClient;
@property(readonly, nonatomic) BOOL persistsPasswordFallback; // @synthesize persistsPasswordFallback=_persistsPasswordFallback;
@property(readonly, nonatomic) BOOL persistsAcrossDeviceLock; // @synthesize persistsAcrossDeviceLock=_persistsAcrossDeviceLock;
@property(readonly, copy, nonatomic) NSString *initialPassword; // @synthesize initialPassword=_initialPassword;
@property(readonly, copy, nonatomic) NSDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_httpHeaders;
@property(readonly, nonatomic) BOOL displaysOnLockScreen; // @synthesize displaysOnLockScreen=_displaysOnLockScreen;
@property(readonly, nonatomic, getter=isDemoAccount) BOOL demoAccount; // @synthesize demoAccount=_demoAccount;
@property(readonly, copy, nonatomic) NSString *clientIdentifierHeader; // @synthesize clientIdentifierHeader=_clientIdentifierHeader;
@property(readonly, nonatomic) BOOL canSetActiveAccount; // @synthesize canSetActiveAccount=_canSetActiveAccount;
@property(readonly, nonatomic) BOOL canCreateNewAccount; // @synthesize canCreateNewAccount=_canCreateNewAccount;
@property(readonly, nonatomic) BOOL allowsRetry; // @synthesize allowsRetry=_allowsRetry;
@property(readonly, nonatomic) BOOL allowsBootstrapCellularData; // @synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData;
@property(readonly, nonatomic) BOOL allowsBioAuthentication; // @synthesize allowsBioAuthentication=_allowsBioAuthentication;
@property(readonly) int accountScope; // @synthesize accountScope=_accountScope;
@property(readonly, copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
- (void)_copyIvarsToCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (BOOL)_allowCreateAccount;
@property(readonly, nonatomic, getter=isAccountNameEditable) BOOL accountNameEditable; // @synthesize accountNameEditable=_accountNameEditable;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
@property(readonly, nonatomic) SSURLBagContext *URLBagContext;
- (void)dealloc;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)init;
- (id)_initSSAuthenticationContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
