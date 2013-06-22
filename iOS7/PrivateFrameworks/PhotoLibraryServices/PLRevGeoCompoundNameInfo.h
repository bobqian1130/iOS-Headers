/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface PLRevGeoCompoundNameInfo : NSObject
{
    NSString *_namePrefix;
    NSArray *_sortedNames;
    NSString *_nameSuffix;
}

@property(copy, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(copy, nonatomic) NSArray *sortedNames; // @synthesize sortedNames=_sortedNames;
@property(copy, nonatomic) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
- (id)description;
- (id)dictionaryForInfo;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

