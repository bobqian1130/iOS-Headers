/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PLImportFileManager : NSObject
{
}

+ (BOOL)isCameraDirectoryFolderName:(id)arg1;
+ (BOOL)isImportDirectoryFolderName:(id)arg1;
- (BOOL)removeUnusedDCIMDirectoryAtPath:(id)arg1;
- (id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2;
- (id)urlForNewDCIMFolderWithFolderNumber:(int *)arg1;
- (id)_DCIMFolderNameWithNumber:(int)arg1;
- (id)_dcimDirectory;

@end

