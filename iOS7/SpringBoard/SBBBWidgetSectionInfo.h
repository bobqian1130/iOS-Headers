/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBBBSectionInfo.h"

@class SBBBWidgetBulletinInfo;

@interface SBBBWidgetSectionInfo : SBBBSectionInfo
{
    SBBBWidgetBulletinInfo *_widgetBulletinInfo;
}

@property(retain, nonatomic) SBBBWidgetBulletinInfo *widgetBulletinInfo; // @synthesize widgetBulletinInfo=_widgetBulletinInfo;
- (BOOL)isWidgetSection;
- (id)identifier;
- (void)dealloc;

@end

