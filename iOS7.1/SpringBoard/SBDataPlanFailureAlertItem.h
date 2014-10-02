//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDataPlanAccountAlertItem.h"

@class NSString;

@interface SBDataPlanFailureAlertItem : SBDataPlanAccountAlertItem
{
    NSString *_carrierName;
    _Bool _newAccount;
}

+ (id)nowButtonTitle;
+ (id)laterButtonTitle;
@property(nonatomic, getter=isNewAccount) _Bool newAccount; // @synthesize newAccount=_newAccount;
@property(copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)dealloc;
- (id)initWithAccountURL:(id)arg1 carrierName:(id)arg2 newAccount:(_Bool)arg3;

@end
