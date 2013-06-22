/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSString, NSURL, SKUIArtworkList, UIColor;

@interface SKUICountdown : NSObject
{
    BOOL _loaded;
    BOOL _flapped;
    int _type;
    NSURL *_URL;
    NSDate *_endDate;
    NSString *_dateFormat;
    NSDate *_startDate;
    int _rate;
    NSString *_numberFormat;
    UIColor *_fontColor;
    UIColor *_flapTopColor;
    UIColor *_flapBottomColor;
    SKUIArtworkList *_artworkList;
    SKUIArtworkList *_endArtworkList;
    long long _initialValue;
    long long _finalValue;
}

@property(retain, nonatomic) SKUIArtworkList *endArtworkList; // @synthesize endArtworkList=_endArtworkList;
@property(retain, nonatomic) SKUIArtworkList *artworkList; // @synthesize artworkList=_artworkList;
@property(nonatomic, getter=isFlapped) BOOL flapped; // @synthesize flapped=_flapped;
@property(copy, nonatomic) UIColor *flapBottomColor; // @synthesize flapBottomColor=_flapBottomColor;
@property(copy, nonatomic) UIColor *flapTopColor; // @synthesize flapTopColor=_flapTopColor;
@property(copy, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(copy, nonatomic) NSString *numberFormat; // @synthesize numberFormat=_numberFormat;
@property(nonatomic) int rate; // @synthesize rate=_rate;
@property(nonatomic) long long finalValue; // @synthesize finalValue=_finalValue;
@property(nonatomic) long long initialValue; // @synthesize initialValue=_initialValue;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *dateFormat; // @synthesize dateFormat=_dateFormat;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(nonatomic) BOOL loaded; // @synthesize loaded=_loaded;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithCountdownDictionary:(id)arg1;

@end

