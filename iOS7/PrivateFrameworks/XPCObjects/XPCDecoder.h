/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSCoder.h"

@class NSArray, NSObject<OS_xpc_object>, NSString;

@interface XPCDecoder : NSCoder
{
    NSObject<OS_xpc_object> *_encoding;
    NSObject<OS_xpc_object> *_currentObject;
    struct __CFDictionary *_decodedObjects;
    struct __CFSet *_requestedDecodedObjects;
    NSArray *_allowedClasses;
    NSString *_errorDescription;
}

+ (id)rootObjectForEncoding:(id)arg1 allowedClasses:(id)arg2 errorDescription:(id)arg3;
+ (id)rootObjectForEncoding:(id)arg1 allowedClasses:(id)arg2;
+ (id)rootObjectForEncoding:(id)arg1;
@property(copy, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
- (BOOL)_classIsAllowed:(Class)arg1;
- (int)versionForClassName:(id)arg1;
- (unsigned int)decodeMachSendRightForKey:(id)arg1;
- (id)decodeEndpointForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned int *)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntegerForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
- (void)_verifyCurrentObject;
- (BOOL)allowsKeyedCoding;
- (id)decodeObject;
- (void)dealloc;
- (id)initWithEncoding:(id)arg1;

@end

