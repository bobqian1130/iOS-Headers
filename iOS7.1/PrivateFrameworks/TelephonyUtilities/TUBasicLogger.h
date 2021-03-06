//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TULogger.h"

@class NSObject<TUAppender>, NSString;

@interface TUBasicLogger : NSObject <TULogger>
{
    struct _opaque_pthread_mutex_t _lock;
    NSString *_identifier;
    int _minimumLogLevel;
    BOOL _enabled;
    NSObject<TUAppender> *_appender;
    BOOL _backtracesEnabled;
    BOOL _symbolicateBacktraces;
}

@property BOOL symbolicateBacktraces; // @synthesize symbolicateBacktraces=_symbolicateBacktraces;
@property BOOL backtracesEnabled; // @synthesize backtracesEnabled=_backtracesEnabled;
@property(readonly) NSObject<TUAppender> *appender;
- (void)setAppender:(id)arg1;
@property BOOL enabled;
@property int minimumLogLevel;
@property(readonly) NSString *identifier;
- (void)setIdentifier:(id)arg1;
- (void)flush;
- (BOOL)shouldLogWithLevel:(int)arg1 topic:(id)arg2;
- (BOOL)shouldLog;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 format:(id)arg4 args:(char *)arg5;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 text:(id)arg4;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 format:(id)arg4;
- (BOOL)_shouldLogWithLevel:(int)arg1 topic:(id)arg2;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 minimumLogLevel:(int)arg2 appender:(id)arg3;

@end

