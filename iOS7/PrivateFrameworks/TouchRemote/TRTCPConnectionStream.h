/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSInputStream, NSObject<OS_dispatch_queue>, NSOutputStream;

@interface TRTCPConnectionStream : NSObject
{
    NSObject<OS_dispatch_queue> *_connectionAccessQueue;
    NSInputStream *_readStream;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSOutputStream *_writeStream;
    NSObject<OS_dispatch_queue> *_writeQueue;
    BOOL _closed;
    id <TRTCPConnectionStreamDelegate> _delegate;
}

@property(nonatomic, getter=isClosed) BOOL closed; // @synthesize closed=_closed;
@property(nonatomic) __weak id <TRTCPConnectionStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)writeData:(id)arg1 completionHandler:(id)arg2;
- (void)readDataOfLength:(unsigned long)arg1 completionHandler:(id)arg2;
- (void)close;
- (void)dealloc;
- (id)_initWithNetService:(id)arg1;
- (id)_initWithReadStream:(id)arg1 writeStream:(id)arg2 peerPublicKey:(id)arg3 options:(int)arg4;
- (id)_initWithReadStream:(id)arg1 writeStream:(id)arg2 options:(int)arg3;

@end

