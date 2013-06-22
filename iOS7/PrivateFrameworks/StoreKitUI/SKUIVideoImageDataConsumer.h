/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIImageDataConsumer.h>

@class UIColor;

@interface SKUIVideoImageDataConsumer : SKUIImageDataConsumer
{
    struct CGSize _constraintSize;
    UIColor *_backgroundColor;
    BOOL _forcesPortrait;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGSize constraintSize; // @synthesize constraintSize=_constraintSize;
@property(nonatomic) BOOL forcesPortrait; // @synthesize forcesPortrait=_forcesPortrait;
- (void).cxx_destruct;
- (id)imageForImage:(id)arg1;
- (id)imageForColor:(id)arg1 size:(struct CGSize)arg2;

@end

