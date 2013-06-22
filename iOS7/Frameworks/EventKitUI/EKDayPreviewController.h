/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKDayViewController.h>

#import "EKDayViewDelegate-Protocol.h"
#import "EKEditItemViewControllerProtocol-Protocol.h"

@class EKEvent;

@interface EKDayPreviewController : EKDayViewController <EKDayViewDelegate, EKEditItemViewControllerProtocol>
{
    EKEvent *_event;
}

@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (struct CGSize)contentSizeForViewInPopover;
- (unsigned int)supportedInterfaceOrientations;
- (id)eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)_updateTitle;

// Remaining properties
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;

@end

