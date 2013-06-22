/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface NSDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
+ (id)newDictionaryWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned int)arg3;
+ (id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
+ (id)dictionaryWithObjectsAndKeys:(id)arg1;
+ (id)dictionary;
+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)dictionaryWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned int)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedKeySetForKeys:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithObjectsAndKeys:(id)arg1;
- (id)initWithObject:(id)arg1 forKey:(id)arg2;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned int)arg3;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (BOOL)__getValue:(id *)arg1 forKey:(id)arg2;
- (void)__apply:(void *)arg1 context:(void *)arg2;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectEnumerator;
- (id)keysSortedByValueUsingSelector:(SEL)arg1;
- (id)keysSortedByValueUsingComparator:(id)arg1;
- (id)keysSortedByValueWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (id)keysOfEntriesPassingTest:(id)arg1;
- (id)keysOfEntriesWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)keyOfEntryPassingTest:(id)arg1;
- (id)keyOfEntryWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDictionary:(id)arg1;
- (id)invertedDictionary;
- (unsigned int)hash;
- (void)getObjects:(id *)arg1;
- (void)getKeys:(id *)arg1;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned int)arg3;
- (void)enumerateKeysAndObjectsUsingBlock:(id)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (unsigned int)countForObject:(id)arg1;
- (unsigned int)countForKey:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (BOOL)containsObject:(id)arg1;
- (BOOL)containsKey:(id)arg1;
- (id)allValues;
- (id)allObjects;
- (id)allKeys;
- (id)allKeysForObject:(id)arg1;
- (BOOL)isNSDictionary__;
- (unsigned long)_cfTypeID;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned int)count;

@end

