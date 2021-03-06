//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, NSURLRequest, WKFrameInfo;

@interface WKNavigationAction : NSObject
{
    struct RetainPtr<WKFrameInfo> _sourceFrame;
    struct RetainPtr<WKFrameInfo> _targetFrame;
    struct RetainPtr<NSURLRequest> _request;
    struct RetainPtr<NSURL> _originalURL;
    BOOL _userInitiated;
    BOOL _canHandleRequest;
    int _navigationType;
}

@property(readonly, nonatomic) int navigationType; // @synthesize navigationType=_navigationType;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setOriginalURL:) NSURL *_originalURL;
@property(copy, nonatomic) NSURLRequest *request;
@property(copy, nonatomic) WKFrameInfo *targetFrame;
@property(copy, nonatomic) WKFrameInfo *sourceFrame;
- (id)description;
- (id)_initWithNavigationActionData:(const struct NavigationActionData *)arg1;
@property(readonly, nonatomic) BOOL _canHandleRequest;
@property(readonly, nonatomic, getter=_isUserInitiated) BOOL _userInitiated;

@end

