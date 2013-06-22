/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AXAccessQueue, NSMutableArray, NSString;

@interface AXIPCClient : NSObject
{
    struct __CFMachPort *_serverPort;
    unsigned int _assignedServerMachPort;
    id _portDeathHandler;
    float _timeout;
    NSString *_clientIdentifier;
    struct __CFRunLoopSource *_clientSource;
    unsigned int _connectionAttempts;
    BOOL _connected;
    NSString *_serviceName;
    NSMutableArray *_postConnectionTasks;
    AXAccessQueue *_connectionQueue;
    unsigned int clientCallbackPort;
    struct __CFRunLoopSource *clientCallbackSource;
}

+ (id)allClients;
+ (void)initialize;
@property(retain, nonatomic) AXAccessQueue *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSMutableArray *postConnectionTasks; // @synthesize postConnectionTasks=_postConnectionTasks;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) float timeout; // @synthesize timeout=_timeout;
@property(nonatomic) struct __CFMachPort *serverPort; // @synthesize serverPort=_serverPort;
@property(copy, nonatomic) id portDeathHandler; // @synthesize portDeathHandler=_portDeathHandler;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
- (BOOL)_handleErrorWithMessage:(id)arg1 outError:(id *)arg2;
- (void)establishConnectionWithTimeout:(double)arg1 completion:(id)arg2;
- (void)_attemptToEstablishConnection;
- (void)_serverDied;
- (id)sendMessage:(id)arg1 withError:(id *)arg2;
- (BOOL)sendSimpleMessage:(id)arg1 withError:(id *)arg2;
- (void)sendSimpleMessage:(id)arg1;
- (BOOL)_verifyConnectionWithError:(id *)arg1;
- (BOOL)disconnectWithError:(id *)arg1;
- (BOOL)connectWithError:(id *)arg1;
- (BOOL)verifyConnectionExists;
- (void)_registerWithServer;
@property(readonly, nonatomic) unsigned int clientCallbackPort; // @synthesize clientCallbackPort;
@property(readonly, nonatomic) struct __CFRunLoopSource *clientCallbackSource; // @synthesize clientCallbackSource;
@property(readonly, nonatomic) unsigned int serviceMachPort;
- (void)dealloc;
- (id)initWithPort:(unsigned int)arg1;
- (id)initWithServiceName:(id)arg1;
- (void)_commonInit;

@end

