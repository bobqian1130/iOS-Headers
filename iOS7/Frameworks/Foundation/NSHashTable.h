/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"

@interface NSHashTable : NSObject <NSCopying, NSCoding, NSFastEnumeration>
{
}

+ (id)hashTableWithOptions:(unsigned int)arg1;
+ (id)weakObjectsHashTable;
+ (id)hashTableWithWeakObjects;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)setRepresentation;
- (id)mutableSet;
- (void)minusHashTable:(id)arg1;
- (void)unionHashTable:(id)arg1;
- (void)intersectHashTable:(id)arg1;
- (BOOL)isSubsetOfHashTable:(id)arg1;
- (BOOL)isEqualToHashTable:(id)arg1;
- (BOOL)intersectsHashTable:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)anyObject;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)member:(id)arg1;
- (id)pointerFunctions;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned int)arg2;
- (void)getKeys:(const void **)arg1 count:(unsigned int *)arg2;
- (void)removeAllItems;
- (id)copy;
- (void)removeItem:(const void *)arg1;
- (void)insertKnownAbsentItem:(const void *)arg1;
- (void)addObject:(id)arg1;
- (void *)getItem:(const void *)arg1;
- (unsigned int)weakCount;
- (id)allObjects;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)objectEnumerator;
- (id)description;
- (id)init;
- (id)initWithOptions:(unsigned int)arg1 capacity:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;

@end

