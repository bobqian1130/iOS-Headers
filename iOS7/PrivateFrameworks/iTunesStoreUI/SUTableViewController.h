/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, SUTableDataSource, SUTableView, UITableView;

@interface SUTableViewController : SUViewController <UITableViewDataSource, UITableViewDelegate>
{
    SUTableDataSource *_dataSource;
    int _disappearOrientation;
    NSIndexPath *_firstTapIndexPath;
    int _placeholderRowCount;
    BOOL _preferUserInteractionWhileScrolling;
    SUTableView *_tableView;
    int _tableViewStyle;
}

@property(nonatomic) int tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SUTableDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)_resetTableView;
- (void)_reloadPlaceholderCells;
- (void)_deliverTapCount:(int)arg1 forIndexPath:(id)arg2;
- (void)_doubleTapTimeout;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
@property(readonly, nonatomic) unsigned int numberOfRows;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (id)copyScriptProperties;
- (id)copyDefaultScriptProperties;
- (id)copyArchivableContext;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(int)arg2 animated:(BOOL)arg3;
- (void)reloadData;
- (void)reloadForChangedRowCount:(int)arg1;
- (id)newTableView;
- (BOOL)indexPathIsPlaceholder:(id)arg1;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(int)arg2;
- (BOOL)deleteRowAtIndexPath:(id)arg1;
- (int)clippedCornersForIndexPath:(id)arg1;
- (BOOL)canSelectRowAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)init;

@end

