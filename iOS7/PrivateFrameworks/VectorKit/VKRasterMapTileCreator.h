/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "VKMapModelDelegate-Protocol.h"

@class NSString, VKImageCanvas, VKMapModel;

@interface VKRasterMapTileCreator : NSObject <VKMapModelDelegate>
{
    VKImageCanvas *_canvas;
    int _mapType;
    VKMapModel *_mapModel;
    struct VKTileKey _superTileKey;
    double _startTimestamp;
    NSString *_tileLoaderClientID;
    id _completion;
}

- (id).cxx_construct;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModel:(id)arg1 willTransitionFrom:(int)arg2 to:(int)arg3 duration:(double)arg4;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (void)mapModel:(id)arg1 didFinishAddingAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 annotationMarker:(id)arg2 didChangeDragState:(int)arg3 fromOldState:(int)arg4;
- (void)mapModel:(id)arg1 needsPanByOffset:(struct CGPoint)arg2 relativeToScreenPoint:(struct CGPoint)arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(id)arg6;
- (void)mapModel:(id)arg1 didAddAnnotationMarkers:(id)arg2;
- (id)mapModel:(id)arg1 markerForAnnotation:(id)arg2;
- (double)mapModelZoomScale:(id)arg1;
- (BOOL)mapModelInNav:(id)arg1;
- (BOOL)mapModelInNavAtDefaultZoom:(id)arg1;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapModelWillBecomFullyDrawn:(id)arg1;
- (void)renderTile:(id)arg1;
@property(nonatomic) int labelScaleFactor;
@property(nonatomic) BOOL localizeLabels;
@property(nonatomic) int mapType;
- (void)setContentScale:(float)arg1;
- (void)setTileKey:(const struct VKRasterTileKey *)arg1;
- (id)detailedDescription;
- (void)dealloc;
- (id)initWithSoftwareRendering:(BOOL)arg1;
- (void)_lookAtKey:(const struct VKTileKey *)arg1;

@end

