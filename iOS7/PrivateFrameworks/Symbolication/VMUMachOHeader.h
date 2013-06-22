/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Symbolication/VMUHeader.h>

@class NSArray, NSDate, NSString;

@interface VMUMachOHeader : VMUHeader
{
    NSString *_name;
    NSString *_path;
    NSString *_dsymPath;
    NSDate *_timestamp;
    id <VMUMemory> _memory;
    unsigned long long _address;
    unsigned long long _linkEditBase;
    NSArray *_loadCommands;
    long long _vmaddrSlide;
    unsigned int _fileType;
    unsigned int _flags;
}

- (void)dealloc;
- (id)description;
- (id)signature;
- (id)segmentAddresses;
- (BOOL)isProtected;
- (id)commpage;
- (BOOL)isCommpage;
- (id)uuid;
- (unsigned int)compatibilityVersion;
- (unsigned int)currentVersion;
- (id)dyLinkerPath;
- (id)dySymbolTable;
- (id)symbolTable;
- (id)regions;
- (id)sections;
- (id)segmentNamed:(id)arg1;
- (BOOL)isMachO;
- (BOOL)isFromSharedCache;
- (unsigned int)flags;
- (unsigned int)fileType;
- (long long)vmaddrSlide;
- (unsigned long long)linkEditBase;
- (unsigned long long)address;
- (id)loadCommands;
- (id)architecture;
- (id)memory;
- (void)setTimestamp:(id)arg1;
- (void)setDsymPath:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setName:(id)arg1;
- (id)timestamp;
- (id)dsymPath;
- (id)path;
- (id)name;

@end

