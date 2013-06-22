/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface CNLabeledValue : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_label;
    id _value;
}

+ (BOOL)supportsSecureCoding;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
+ (id)makeIdentifier;
+ (id)identifierProvider;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)isEqualToLabeledValue:(id)arg1 includeIdentifiers:(BOOL)arg2;
- (BOOL)isEqualToLabeledValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)labeledValueBySettingValue:(id)arg1;
- (id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (id)_initWithLabel:(id)arg1 value:(id)arg2 identifier:(id)arg3;

@end

