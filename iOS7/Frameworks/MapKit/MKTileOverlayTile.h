/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface MKTileOverlayTile : NSObject
{
    CDStruct_a1199def _path;
    CDStruct_02837cd9 _frame;
    float _scale;
    NSData *_image;
}

@property(retain, nonatomic) NSData *image; // @synthesize image=_image;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) CDStruct_90e2a262 frame; // @synthesize frame=_frame;
@property(nonatomic) CDStruct_a1199def path; // @synthesize path=_path;
- (id).cxx_construct;
- (void)dealloc;
- (id)description;

@end

