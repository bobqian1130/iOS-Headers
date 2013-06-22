/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSString;

@interface ABUIPerson : NSObject <NSCopying>
{
    void *_record;
    void *_addressBook;
    void *_source;
    NSArray *_linkedPeople;
}

+ (id)personInAddressBook:(void *)arg1;
+ (id)personInSource:(void *)arg1;
+ (id)person;
+ (id)personWithABRecordID:(int)arg1 fromAddressBook:(void *)arg2;
+ (id)personWithABPerson:(void *)arg1;
+ (void)setAccountStore:(id)arg1;
@property(readonly) void *addressBook; // @synthesize addressBook=_addressBook;
@property(readonly) void *source; // @synthesize source=_source;
@property(readonly) void *record; // @synthesize record=_record;
@property(readonly) BOOL isFromFacebook;
@property(readonly) NSString *secondarySourceName;
@property(readonly) NSString *primarySourceName;
@property(readonly) int kind;
- (void)removePropertyValue:(int)arg1;
- (void)setValue:(void *)arg1 forProperty:(int)arg2;
- (void *)copyPropertyValue:(int)arg1;
- (id)valueForProperty:(int)arg1;
@property(readonly) BOOL hasPreferredPhoto;
@property(readonly) BOOL hasPhoto;
- (void)setAsPreferredPersonForPhoto;
@property(readonly) ABUIPerson *preferredPersonForPhoto;
@property(readonly) NSData *preferredPhotoThumbnail;
@property(readonly) NSData *photoThumbnail;
- (void)setAsPreferredPersonForName;
@property(readonly) ABUIPerson *preferredPersonForName;
@property(readonly) NSString *preferredName;
- (id)nameIgnoringOrganization:(BOOL)arg1;
@property(readonly) NSString *phoneticName;
@property(readonly) NSString *name;
- (id)policiesForAllLinkedPeople;
@property(readonly) void *policy;
- (void)mergeProperties:(id)arg1 fromRecord:(void *)arg2;
- (void)mergeValuesFromRecord:(void *)arg1;
- (BOOL)allowsCustomLabelsForProperty:(int)arg1;
@property(readonly) BOOL isRemote;
@property(readonly) BOOL areAllLinkedPeopleReadonly;
@property(readonly) BOOL isReadonly;
- (BOOL)linkToPerson:(id)arg1;
@property(readonly) unsigned int linkedPeopleCount;
@property(readonly) NSArray *linkedPeople;
@property(readonly) BOOL hasLinkedPeople;
@property(readonly) BOOL isMeCard;
- (id)reloadFromDB;
@property(readonly) BOOL hasValidRecordID;
@property(readonly) BOOL recordWasDeleted;
- (BOOL)updateNewPersonKindFromName;
- (BOOL)updatePersonKindFromName;
- (BOOL)_updatePersonKindFromNamePreserveOrganizationKind:(BOOL)arg1;
- (void)setNamePropertiesFromPerson:(id)arg1;
- (BOOL)addToGroup:(void *)arg1;
- (BOOL)addToAddressBook:(void *)arg1;
@property(readonly) unsigned int recordType;
@property(readonly) int recordID;
- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithABRecordID:(int)arg1 fromAddressBook:(void *)arg2;
- (id)initWithABPerson:(void *)arg1;

@end

