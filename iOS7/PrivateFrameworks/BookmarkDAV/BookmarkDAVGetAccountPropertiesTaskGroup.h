/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVGetAccountPropertiesTaskGroup.h"

@class NSSet;

@interface BookmarkDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup
{
    NSSet *_bookmarkHomes;
}

@property(readonly) NSSet *bookmarkHomes; // @synthesize bookmarkHomes=_bookmarkHomes;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)homeSet;
- (id)_copyAccountPropertiesPropFindElements;
- (id)description;
- (void)dealloc;

@end

