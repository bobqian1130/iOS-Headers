/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface CTSubscriber : NSObject
{
    struct __CTServerConnection *_server;
    struct vector<dispatch::block<void (^)(NSDictionary *)>, std::__1::allocator<dispatch::block<void (^)(NSDictionary *)>>> _authCallbacks;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)authenticateWithInfo:(id)arg1 handleResult:(id)arg2;
- (void)handleAuthCallback:(id)arg1;
- (BOOL)refreshCarrierToken;
@property(readonly, nonatomic) NSData *carrierToken; // @dynamic carrierToken;
- (void)dealloc;
- (id)init;

@end

