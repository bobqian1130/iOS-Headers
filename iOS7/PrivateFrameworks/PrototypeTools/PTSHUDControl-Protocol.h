/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSString, _UISettings;

@protocol PTSHUDControl <NSObject>
@property(nonatomic) BOOL autoEnablesForDesignMode;
@property(nonatomic) BOOL enabled;
@property(nonatomic) int alignment;
@property(copy, nonatomic) NSString *valueKeyPath;
@property(nonatomic) __weak _UISettings *settings;
@end

