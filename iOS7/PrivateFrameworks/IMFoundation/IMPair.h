/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface IMPair : NSObject <NSCopying>
{
    id _first;
    id _second;
}

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
@property(retain) id second; // @synthesize second=_second;
@property(retain) id first; // @synthesize first=_first;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end

