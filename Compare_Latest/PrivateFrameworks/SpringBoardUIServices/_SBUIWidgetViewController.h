//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "_SBUIWidgetHost.h"

@class NSString;

@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost>
{
    NSString *_widgetIdentifier;
    id <_SBUIWidgetHost> _widgetHost;
}

@property(nonatomic) id <_SBUIWidgetHost> widgetHost; // @synthesize widgetHost=_widgetHost;
@property(copy, nonatomic) NSString *widgetIdentifier; // @synthesize widgetIdentifier=_widgetIdentifier;
- (void)invalidatePreferredViewSize;
- (void)requestLaunchOfURL:(id)arg1;
- (void)requestPresentationOfViewController:(id)arg1 presentationStyle:(int)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setVisibleWidgetsIDs:(id)arg1;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
@property(readonly, nonatomic) struct CGSize preferredViewSize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

