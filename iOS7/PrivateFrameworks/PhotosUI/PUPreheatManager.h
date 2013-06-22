/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSFetchRequest, NSNumber, PUImageManager;

@interface PUPreheatManager : NSObject
{
    BOOL _imageFormatIsTable;
    int _imageFormat;
    NSNumber *_imageFormatKey;
    PUImageManager *_imageManager;
    id <PLPreheatItemSource> _imageTable;
    id <NSFastEnumeration> _previousAssets;
    NSFetchRequest *_fetchRequest;
}

@property(retain, nonatomic) NSFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(retain, nonatomic) id <NSFastEnumeration> previousAssets; // @synthesize previousAssets=_previousAssets;
@property(retain, nonatomic) id <PLPreheatItemSource> imageTable; // @synthesize imageTable=_imageTable;
@property(retain, nonatomic) PUImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(nonatomic) BOOL imageFormatIsTable; // @synthesize imageFormatIsTable=_imageFormatIsTable;
@property(retain, nonatomic) NSNumber *imageFormatKey; // @synthesize imageFormatKey=_imageFormatKey;
@property(nonatomic) int imageFormat; // @synthesize imageFormat=_imageFormat;
- (void).cxx_destruct;
- (void)_prefetchAssetsForThumbnails:(id)arg1;
- (void)pu_diffsFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2 differenceHandler:(id)arg3;
- (void)cancelAllPreheating;
- (id)imageForAsset:(id)arg1;
- (id)dataForAsset:(id)arg1 width:(int *)arg2 height:(int *)arg3 bytesPerRow:(int *)arg4 dataWidth:(int *)arg5 dataHeight:(int *)arg6 imageDataOffset:(int *)arg7;
- (void)preheatAssets:(id)arg1 cancelAssets:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithFormat:(int)arg1;

@end

