/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SUScriptObject.h"

@class NSString, WebScriptObject;

@interface SKScriptStoreSheetRequest : SUScriptObject
{
    int _pageStyle;
    WebScriptObject *_productParameters;
    NSString *_productURL;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
- (void).cxx_destruct;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) int productPageStylePhone;
@property(readonly) int productPageStylePad;
@property(readonly) int productPageStyleBanner;
@property(readonly) int productPageStyleAutomatic;
@property(retain) NSString *productURL;
@property(retain) WebScriptObject *productParameters;
@property int productPageStyle;
- (id)_className;
- (id)newNativeStorePageRequest;

@end

