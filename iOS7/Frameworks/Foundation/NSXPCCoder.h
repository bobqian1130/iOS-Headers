/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSCoder.h>

@interface NSXPCCoder : NSCoder
{
    id <NSObject> _userInfo;
    id _reserved1;
}

@property(retain) id <NSObject> userInfo; // @synthesize userInfo=_userInfo;
- (void)dealloc;
- (id)init;
- (id)decodeXPCObjectForKey:(id)arg1;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (BOOL)requiresSecureCoding;

@end

