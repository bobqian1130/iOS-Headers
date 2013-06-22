/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayerUI/MPUDataSource.h>

@class MPMediaQuery, MPMediaQuerySectionInfo, NSArray, NSURL;

@interface MPUQueryDataSource : MPUDataSource
{
    NSArray *_entities;
    BOOL _invalidateWhenEnteringForeground;
    MPMediaQuerySectionInfo *_sectionInfo;
    MPMediaQuery *_query;
}

@property(readonly, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)_sectionInfo;
- (BOOL)_deleteHidesFromCloudForIndex:(unsigned int)arg1 hidesAll:(out char *)arg2;
- (void)_postInvalidationNotification;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_isCloudEnabledDidChangeNotification:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
@property(readonly, nonatomic) NSURL *bestStoreURL;
- (id)titleForGlobalHeader;
- (BOOL)showsEntityCountFooter;
- (struct _NSRange)rangeOfSectionAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfSectionForSectionTitleAtIndex:(unsigned int)arg1;
- (id)localizedSectionTitleAtIndex:(unsigned int)arg1;
- (id)localizedSectionIndexTitles;
- (unsigned int)numberOfSections;
- (BOOL)showsIndexBar;
- (BOOL)isEmpty;
- (void)invalidateWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3;
- (id)entities;
- (int)editingTypeForEntityAtIndex:(unsigned int)arg1;
- (void)deleteEntityAtIndex:(unsigned int)arg1;
- (id)dataSourceFromEntityAtIndex:(unsigned int)arg1 entityType:(int)arg2;
- (unsigned int)count;
- (BOOL)canSelectEntityAtIndex:(unsigned int)arg1;
- (BOOL)canEditEntityAtIndex:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 entityType:(int)arg2;
- (id)initWithEntityType:(int)arg1;

@end

