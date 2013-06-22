/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSBundle, NSData, NSString, UINibDecoder;

@interface UINibStorage : NSObject
{
    NSString *bundleResourceName;
    NSString *bundleDirectoryName;
    NSBundle *bundle;
    NSString *identifierForStringsFile;
    NSData *archiveData;
    UINibDecoder *nibDecoder;
    BOOL instantiatingForSimulator;
    BOOL captureImplicitLoadingContextOnDecode;
}

@property BOOL captureImplicitLoadingContextOnDecode; // @synthesize captureImplicitLoadingContextOnDecode;
@property(nonatomic) BOOL instantiatingForSimulator; // @synthesize instantiatingForSimulator;
@property(retain, nonatomic) UINibDecoder *nibDecoder; // @synthesize nibDecoder;
@property(copy, nonatomic) NSData *archiveData; // @synthesize archiveData;
@property(copy, nonatomic) NSString *identifierForStringsFile; // @synthesize identifierForStringsFile;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle;
@property(copy, nonatomic) NSString *bundleDirectoryName; // @synthesize bundleDirectoryName;
@property(copy, nonatomic) NSString *bundleResourceName; // @synthesize bundleResourceName;
- (void)dealloc;

@end

