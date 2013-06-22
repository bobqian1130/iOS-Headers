/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUSectionInfo.h>

@class NSArray, NSMutableArray;

@interface IUMutableSectionInfo : IUSectionInfo
{
    NSMutableArray *_info;
    NSArray *_indexBarTitles;
}

- (void).cxx_destruct;
- (id)titleOfSectionAtIndex:(unsigned int)arg1;
- (id)titleOfIndexBarSectionAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfSections;
- (unsigned int)numberOfIndexBarTitles;
- (unsigned int)indexOfSectionAtIndex:(unsigned int)arg1;
- (void)setIndexBarTitles:(id)arg1;
- (void)addSectionWithTitle:(id)arg1 index:(unsigned int)arg2;
- (void)dealloc;

@end

