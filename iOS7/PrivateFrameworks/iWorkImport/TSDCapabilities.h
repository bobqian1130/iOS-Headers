/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSDCapabilities : NSObject
{
    int mPlatform;
    int mDevice;
    int mRenderer;
}

+ (id)currentCapabilities;
@property(readonly, nonatomic) int renderer; // @synthesize renderer=mRenderer;
@property(readonly, nonatomic) int device; // @synthesize device=mDevice;
@property(readonly, nonatomic) int platform; // @synthesize platform=mPlatform;
@property(readonly, nonatomic) struct CGSize maximumTextureSize;
@property(readonly, nonatomic) _Bool hasLightningPort;
@property(readonly, nonatomic) _Bool isRendererH5OrBelow;
@property(readonly, nonatomic) _Bool isRendererH4OrBelow;
@property(readonly, nonatomic) _Bool isRendererH3OrBelow;
- (id)init;
- (void)p_setupDevice;
- (void)p_setupPlatform;

@end
