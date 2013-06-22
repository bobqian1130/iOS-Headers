/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "WebPluginContainerCheckController-Protocol.h"
#import "WebPluginManualLoader-Protocol.h"

@class NSMutableArray, NSMutableSet, WAKView, WebDataSource;

@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController>
{
    WAKView *_documentView;
    WebDataSource *_dataSource;
    NSMutableArray *_views;
    BOOL _started;
    NSMutableSet *_checksInProgress;
    NSMutableArray *_viewsNotInDocument;
}

+ (void)pluginViewHidden:(id)arg1;
+ (BOOL)isPlugInView:(id)arg1;
+ (void)addPlugInView:(id)arg1;
+ (id)plugInViewWithArguments:(id)arg1 fromPluginPackage:(id)arg2;
- (void)_webPluginContainerPostMediaPlayerNotification:(int)arg1 forElement:(id)arg2;
- (void)_webPluginContainerSetMediaPlayerProxy:(id)arg1 forElement:(id)arg2;
- (void)pluginViewFinishedLoading:(id)arg1;
- (void)pluginView:(id)arg1 receivedError:(id)arg2;
- (void)pluginView:(id)arg1 receivedData:(id)arg2;
- (void)pluginView:(id)arg1 receivedResponse:(id)arg2;
- (id)URLPolicyCheckReferrer;
- (id)webView;
- (id)webFrame;
- (void)showStatus:(id)arg1;
- (void)webPlugInContainerShowStatus:(id)arg1;
- (void)webPlugInContainerDidHideFullScreenForView:(id)arg1;
- (void)webPlugInContainerWillShowFullScreenForView:(id)arg1;
- (void)webPlugInContainerLoadRequest:(id)arg1 inFrame:(id)arg2;
- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)arg1 inFrame:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4;
- (BOOL)processingUserGesture;
- (void)destroyAllPlugins;
- (void)_cancelOutstandingChecks;
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)arg1;
- (void)destroyPlugin:(id)arg1;
- (void)addPlugin:(id)arg1;
- (void)pluginViewCreated:(id)arg1;
- (void)restorePluginsFromCache;
- (void)stopPluginsForPageCache;
- (void)stopAllPlugins;
- (void)startAllPlugins;
- (void)destroyOnePlugin:(id)arg1;
- (void)stopOnePluginForPageCache:(id)arg1;
- (void)stopOnePlugin:(id)arg1;
- (id)superlayerForPluginView:(id)arg1;
- (BOOL)plugInsAreRunning;
- (void)dealloc;
- (void)setDataSource:(id)arg1;
- (id)initWithDocumentView:(id)arg1;

@end

