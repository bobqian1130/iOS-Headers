/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSSet;

@interface BBSectionIcon : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_variants;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSSet *variants; // @synthesize variants=_variants;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_bestVariantForUIFormat:(int)arg1;
- (id)_bestVariantForFormat:(int)arg1;
- (void)dealloc;
- (void)addVariant:(id)arg1;

@end

