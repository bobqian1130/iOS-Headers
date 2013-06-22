/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPAbstractAlternateTracksViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class UINavigationBar, UIProgressIndicator, UITableView, UITextLabel, UIView;

@interface MPAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_backgroundView;
    UINavigationBar *_navigationBar;
    UITableView *_table;
    UIProgressIndicator *_progressIndicator;
    UITextLabel *_loadingLabel;
}

- (void).cxx_destruct;
- (void)_setCell:(id)arg1 isChecked:(BOOL)arg2;
- (void)_exitAnimated:(BOOL)arg1;
- (void)removeLoadingUI;
- (void)addLoadingUI;
- (void)reloadData;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_doneButtonAction:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willChangeToInterfaceOrientation:(int)arg1;
- (void)didChangeToInterfaceOrientation:(int)arg1;
- (void)dealloc;

@end

