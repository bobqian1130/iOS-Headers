/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUViewController.h>

#import "SSDownloadManagerObserver-Protocol.h"

@class NSObject<OS_dispatch_source>, SUClientInterface, SUDownloadManager, SUViewController<SUDownloadsChildViewController>, UIView;

@interface SUDownloadsViewController : SUViewController <SSDownloadManagerObserver>
{
    SUViewController<SUDownloadsChildViewController> *_childViewController;
    SUClientInterface *_clientInterface;
    SUDownloadManager *_downloadManager;
    UIView *_emptyDownloadQueueView;
    BOOL _isUsingNetwork;
    NSObject<OS_dispatch_source> *_reloadFromServerTimer;
}

- (void)_updatePurchasedPlaylistButton;
- (void)_startReloadFromServerTimer;
- (void)_setUsingNetwork:(BOOL)arg1;
- (void)_reloadDownloadManagerFromServer;
- (void)_reloadEmptyDownloadQueueView;
- (void)_reloadDataAnimated:(BOOL)arg1;
- (id)_newChildViewController;
- (void)_cancelReloadFromServerTimer;
- (void)_tabConfigurationChanged:(id)arg1;
- (void)_clientDidStopIgnoringDownloadsNotification:(id)arg1;
- (void)_gotoPurchasedPlaylist:(id)arg1;
- (void)setScriptButtons:(id)arg1;
- (id)scriptButtons;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)tabBarControllerDidReselectTabBarItem:(id)arg1;
- (void)reloadData;
- (void)reload;
- (void)loadView;
- (id)copyScriptViewController;
- (id)contentScrollView;
- (void)applicationWillEnterForeground;
- (void)updateTabBarItemsAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)initWithManagerOptions:(id)arg1 preorderItemKinds:(id)arg2;
- (id)initWithManagerOptions:(id)arg1;
- (id)initWithClientInterface:(id)arg1 managerOptions:(id)arg2 preorderItemKinds:(id)arg3;
- (id)init;

@end

