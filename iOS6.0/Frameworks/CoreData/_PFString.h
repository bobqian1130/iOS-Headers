/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface _PFString : NSString
{
    int _reserved1;
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
    int _reserved2;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
- (id)description;
- (BOOL)isEqualToString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)cStringLength;
- (void)getCString:(char *)arg1;
- (const char *)UTF8String;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (const char *)cString;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (void)getCharacters:(unsigned short *)arg1;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (unsigned int)length;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (void)dealloc;

@end
