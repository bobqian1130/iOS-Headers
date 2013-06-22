/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSString;

@interface SBControlCenterSectionViewController : UIViewController
{
    id <SBControlCenterSectionViewControllerDelegate> _delegate;
}

+ (Class)viewClass;
@property(nonatomic) id <SBControlCenterSectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)noteControlCenterDidDismiss;
- (void)noteControlCenterWillPresent;
- (void)noteSettingsDidUpdate:(id)arg1;
- (struct CGSize)contentSizeForOrientation:(int)arg1;
- (BOOL)enabledForOrientation:(int)arg1;
@property(readonly, nonatomic) NSString *sectionIdentifier;
- (void)loadView;

@end

