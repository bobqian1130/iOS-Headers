/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUMediaQueriesDataSource.h>

@interface IUPodcastTracksDataSource : IUMediaQueriesDataSource
{
}

+ (int)mediaEntityType;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (void)reloadActionRows;
- (void)createGlobalContexts;
- (Class)cellConfigurationClassForEntity:(id)arg1;
- (BOOL)shouldDisplayWhenEmpty;
- (BOOL)allowsDeletion;

@end

