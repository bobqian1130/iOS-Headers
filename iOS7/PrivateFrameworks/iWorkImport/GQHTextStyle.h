/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GQHTextStyle : NSObject
{
}

+ (void)reduceFontSizeForSuperscriptedText:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (BOOL)getDefaultLineHeight:(struct __CFString *)arg1 fontSize:(float)arg2 defLineHeight:(int *)arg3;
+ (const char *)name;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3 isSpan:(BOOL)arg4;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (BOOL)platformGetDefaultLineHeight:(struct __CFString *)arg1 fontSize:(float)arg2 defLineHeight:(int *)arg3;
+ (struct __CFString *)platformCreateCssFontFamilyStringFromFontName:(struct __CFString *)arg1;
+ (struct __CTFont *)createFontFromName:(struct __CFString *)arg1 size:(float)arg2;

@end

