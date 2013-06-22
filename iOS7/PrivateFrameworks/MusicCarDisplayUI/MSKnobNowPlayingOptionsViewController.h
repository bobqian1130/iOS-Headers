/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MPAVController, MPMediaQueryNowPlayingItem, UIButton, UILabel, UITableView;

@interface MSKnobNowPlayingOptionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UILabel *_titleLabel;
    UIButton *_backButton;
    MPMediaQueryNowPlayingItem *_nowPlayingItem;
    MPAVController *_player;
    id <MSCarDisplayServiceProvider> _serviceProvider;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)setCreatingGenius:(BOOL)arg1;
- (void)knobBackPressed:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithItem:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;

@end

