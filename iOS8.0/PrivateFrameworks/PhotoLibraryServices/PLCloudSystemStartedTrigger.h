//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudTrigger.h>

@class PLCloudPhotoLibraryManager;

@interface PLCloudSystemStartedTrigger : PLCloudTrigger
{
    BOOL _activated;
    PLCloudPhotoLibraryManager *_cloudLibraryManager;
}

+ (void)triggerWithCloudLibraryManager:(id)arg1;
+ (id)sharedInstance;
@property(readonly, retain, nonatomic) PLCloudPhotoLibraryManager *cloudLibraryManager; // @synthesize cloudLibraryManager=_cloudLibraryManager;
- (void)setCloudLibraryManager:(id)arg1;
- (void)activate;
- (void)start;

@end
