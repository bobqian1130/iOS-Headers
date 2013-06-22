/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XPCClientDelegate-Protocol.h"

@class NSObject<OS_dispatch_queue>, XPCClient;

@interface WPAWDL : NSObject <XPCClientDelegate>
{
    int _state;
    XPCClient *_connection;
    id <WPAWDLDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)generateDataFromEmails:(id)arg1;
+ (id)hashEmail:(id)arg1;
+ (BOOL)doesData:(id)arg1 matchArray:(id)arg2;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <WPAWDLDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XPCClient *connection; // @synthesize connection=_connection;
@property int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (void)connectionDied;
- (void)updateState:(int)arg1;
- (void)messageArrived:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)allowAWDLConnection;
- (void)cancelAWDLConnection;
- (void)stopConnectionlessAWDLServiceScanning;
- (void)startConnectionlessAWDLServiceScanning;
- (void)stopConnectionlessAWDLServiceAdvertising;
- (void)startConnectionlessAWDLServiceAdvertisingWithData:(id)arg1;

@end

