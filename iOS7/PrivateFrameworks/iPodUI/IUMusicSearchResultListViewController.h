/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUSearchResultListViewController.h>

@class NSMutableDictionary;

@interface IUMusicSearchResultListViewController : IUSearchResultListViewController
{
    NSMutableDictionary *_sectionHeaderCache;
}

+ (Class)tableViewCellClass;
+ (id)tableViewBackgroundColor;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)setTableView:(id)arg1;
- (void)reloadData;
- (id)init;

@end

