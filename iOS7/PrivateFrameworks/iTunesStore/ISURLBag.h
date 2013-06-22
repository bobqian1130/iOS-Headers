/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSSet, SSNetworkConstraints, SSURLBagContext;

@interface ISURLBag : NSObject
{
    SSURLBagContext *_context;
    SSNetworkConstraints *_defaultConstraints;
    NSDictionary *_dictionary;
    NSArray *_guidPatterns;
    NSSet *_guidSchemes;
    NSDictionary *_headerPatterns;
    double _invalidationTime;
    BOOL _loadedFromDiskCache;
}

+ (BOOL)_allowUnsignedBags;
+ (id)valueForKey:(id)arg1 inBagContext:(id)arg2;
+ (BOOL)urlIsTrusted:(id)arg1 inBagContext:(id)arg2;
+ (id)urlForKey:(id)arg1 inBagContext:(id)arg2;
+ (id)urlBagForContext:(id)arg1;
+ (BOOL)shouldSendGUIDForURL:(id)arg1 inBagContext:(id)arg2;
+ (id)networkConstraintsForDownloadKind:(id)arg1 inBagContext:(id)arg2;
+ (id)copyExtraHeadersForURL:(id)arg1 inBagContext:(id)arg2;
+ (id)storeFrontURLBagKeyForItemKind:(id)arg1;
+ (void)_loadItemKindURLBagKeyMap;
@property(nonatomic) BOOL loadedFromDiskCache; // @synthesize loadedFromDiskCache=_loadedFromDiskCache;
@property(nonatomic) double invalidationTime; // @synthesize invalidationTime=_invalidationTime;
- (void)_writeURLResolutionCacheFile;
- (void)_writeNetworkConstraintsCacheFile;
- (void)_setDictionary:(id)arg1;
- (id)_networkConstraintsCachePath;
- (BOOL)_loadFromSignedDictionary:(id)arg1 returningError:(id *)arg2;
- (id)_copyHeaderPatternsFromDictionary:(id)arg1;
- (id)_copyGUIDSchemesFromDictionary:(id)arg1;
- (id)_copyGUIDPatternsFromDictionary:(id)arg1;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
@property(readonly, nonatomic) long long versionIdentifier;
@property(readonly, nonatomic) NSDictionary *URLBagDictionary;
@property(copy, nonatomic) SSURLBagContext *URLBagContext;
- (id)sanitizedURLForURL:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)URLForURL:(id)arg1 clientIdentifier:(id)arg2;
- (BOOL)urlIsTrusted:(id)arg1;
- (id)urlForKey:(id)arg1;
- (BOOL)shouldSendGUIDForURL:(id)arg1;
- (void)setInvalidationTimeWithExprationInterval:(double)arg1;
- (id)searchQueryParametersForClientIdentifier:(id)arg1 networkType:(int)arg2;
- (id)networkConstraintsForDownloadKind:(id)arg1;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly) NSSet *availableStorefrontItemKinds;
- (BOOL)loadFromDictionary:(id)arg1 returningError:(id *)arg2;
- (id)copyExtraHeadersForURL:(id)arg1;
- (void)dealloc;
- (id)initWithURLBagContext:(id)arg1;
- (id)initWithRawDictionary:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)init;

@end

