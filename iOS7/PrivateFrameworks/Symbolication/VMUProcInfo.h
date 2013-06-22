/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SafeVMUProcInfoProtocol-Protocol.h"

@class NSArray, NSString;

@interface VMUProcInfo : NSObject <SafeVMUProcInfoProtocol>
{
    unsigned int _task;
    BOOL _needTaskPortDealloc;
    NSString *_name;
    int _cpuType;
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    int _pid;
    int _ppid;
    struct timeval _startTime;
}

+ (int)processParentId:(int)arg1;
+ (BOOL)isProcessRunning:(int)arg1;
+ (id)getProcessIds;
- (unsigned int)hash;
- (int)compareByUserAppName:(id)arg1;
- (int)compareByName:(id)arg1;
- (int)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)signal:(int)arg1;
- (BOOL)terminate;
- (BOOL)isRunning;
- (BOOL)isNative;
- (int)cpuType;
- (BOOL)isCFM;
- (BOOL)isMachO;
- (BOOL)isApp;
- (void)update;
- (unsigned int)task;
- (int)ppid;
- (int)pid;
- (id)description;
- (id)name;
- (id)userAppName;
- (id)valueForEnvVar:(id)arg1;
- (id)envVars;
- (id)arguments;
- (id)firstArgument;
- (id)requestedAppName;
- (id)realAppName;
- (id)_infoFromCommandLine:(int)arg1;
- (id)procTableName;
- (struct timeval)startTime;
- (void)finalize;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithPid:(int)arg1;
- (id)init;

@end

