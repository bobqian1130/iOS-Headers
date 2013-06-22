/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SKUICacheCoding-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, NSURL, SKUIArtworkList, SKUIItemOffer, SKUIUber;

@interface SKUIItem : NSObject <SKUICacheCoding>
{
    NSString *_artistName;
    SKUIArtworkList *_artworks;
    NSString *_bundleID;
    NSString *_categoryName;
    unsigned int _deviceFamilies;
    long long _itemIdentifier;
    int _itemKind;
    NSString *_itemKindString;
    SKUIItemOffer *_itemOffer;
    BOOL _newsstandApp;
    int _newsstandBindingEdge;
    int _newsstandBindingType;
    SKUIArtworkList *_newsstandArtworks;
    int _numberOfUserRatings;
    int _parentalControlsRank;
    BOOL _prerenderedArtwork;
    NSString *_productPageURLString;
    NSArray *_requiredCapabilities;
    NSString *_title;
    SKUIUber *_uber;
    float _userRating;
    long long _versionIdentifier;
    NSString *_versionString;
}

@property(readonly, nonatomic) NSString *itemKindString; // @synthesize itemKindString=_itemKindString;
@property(readonly, nonatomic) int itemKind; // @synthesize itemKind=_itemKind;
@property(readonly, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;
@property(readonly, nonatomic) long long versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;
@property(readonly, nonatomic) float userRating; // @synthesize userRating=_userRating;
@property(readonly, nonatomic) SKUIUber *uber; // @synthesize uber=_uber;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property(readonly, nonatomic) NSString *productPageURLString; // @synthesize productPageURLString=_productPageURLString;
@property(readonly, nonatomic) SKUIItemOffer *primaryItemOffer; // @synthesize primaryItemOffer=_itemOffer;
@property(readonly, nonatomic, getter=hasPrerenderedArtwork) BOOL prerenderedArtwork; // @synthesize prerenderedArtwork=_prerenderedArtwork;
@property(readonly, nonatomic) int parentalControlsRank; // @synthesize parentalControlsRank=_parentalControlsRank;
@property(readonly, nonatomic) int numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(readonly, nonatomic) int newsstandBindingType; // @synthesize newsstandBindingType=_newsstandBindingType;
@property(readonly, nonatomic) int newsstandBindingEdge; // @synthesize newsstandBindingEdge=_newsstandBindingEdge;
@property(readonly, nonatomic) SKUIArtworkList *newsstandArtworks; // @synthesize newsstandArtworks=_newsstandArtworks;
@property(readonly, nonatomic, getter=isNewsstandApp) BOOL newsstandApp; // @synthesize newsstandApp=_newsstandApp;
@property(readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) unsigned int deviceFamilies; // @synthesize deviceFamilies=_deviceFamilies;
@property(readonly, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleID;
@property(readonly, nonatomic) SKUIArtworkList *artworks; // @synthesize artworks=_artworks;
@property(readonly, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
@property(readonly, nonatomic) NSURL *largestArtworkURL;
- (id)artworkURLForSize:(int)arg1;
- (id)initWithLookupDictionary:(id)arg1;

@end

