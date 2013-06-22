/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class EAGLContext, NSMutableArray;

@interface TKVibrationRecorderRippleView : UIView
{
    EAGLContext *_context;
    int _backingWidth;
    int _backingHeight;
    unsigned int _viewFramebuffer;
    unsigned int _viewRenderbuffer;
    unsigned int _shaderProgram;
    int *_uniformsLocations;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
    } *_baseRippleSectionVertices;
    void *_verticesData;
    unsigned long _verticesDataMaximumRipplesCount;
    unsigned int _rippleTexture;
    BOOL _animating;
    float _fingerStillSpeed;
    float _fingerMovingSpeed;
    float _firstRippleInitialRadius;
    float _fadeOutRadius;
    float _darkness;
    BOOL _isTrackingTouch;
    CDStruct_6e3f967a _currentTouchLocation;
    double _currentTouchStartTime;
    unsigned int _numberOfRipplesForCurrentTouch;
    NSMutableArray *_ripplesContextQueue;
    NSMutableArray *_recentTouchesContextQueue;
    float _currentSpeedCoefficient;
    BOOL _needsCurrentSpeedRefresh;
    NSMutableArray *_reusableTouchContexts;
}

+ (Class)layerClass;
@property(nonatomic) float fadeOutRadius; // @synthesize fadeOutRadius=_fadeOutRadius;
@property(nonatomic) float firstRippleInitialRadius; // @synthesize firstRippleInitialRadius=_firstRippleInitialRadius;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_touchEndedAtLocation:(struct CGPoint)arg1;
- (void)_touchMovedToLocation:(struct CGPoint)arg1;
- (void)_touchBeganAtLocation:(struct CGPoint)arg1;
- (void)_updateTouchLocationCoordinatesWithPoint:(struct CGPoint)arg1;
- (void)_stopAnimation;
- (void)_startAnimation;
- (id)_displayLinkManager;
- (void)_refresh:(id)arg1;
- (void)_enqueueReusableTouchContextObject:(id)arg1;
- (id)_reusableTouchContextObject;
- (void)layoutSubviews;
- (void)_drawViewWithVertices:(BOOL)arg1;
- (void)_computeBaseRippleSectionVerticesIfNeeded;
- (BOOL)_prepareVerticesDataArrayForStoringVerticesOfRipplesWithCount:(unsigned long)arg1;
- (void)_initializeConfigurationParameters;
- (void)_configureView;
- (void)_destroyFramebuffer;
- (BOOL)_createFramebuffer;
- (void)_tearDownView;
- (BOOL)_setUpView;
@property(readonly, nonatomic) float _fadeOutRadius;
@property(readonly, nonatomic) float _firstRippleInitialRadius;
@property(readonly, nonatomic) float _currentSpeed;
@property(nonatomic) float darkness;
@property(nonatomic) float fingerMovingSpeed;
@property(nonatomic) float fingerStillSpeed;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

