/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface PKPassField : NSObject <NSSecureCoding>
{
    NSString *_value;
    int _type;
    NSString *_key;
    NSString *_label;
    id _unformattedValue;
    NSString *_changeMessage;
    int _textAlignment;
    unsigned int _dataDetectorTypes;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSString *changeMessage; // @synthesize changeMessage=_changeMessage;
@property(copy, nonatomic) id unformattedValue; // @synthesize unformattedValue=_unformattedValue;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)flushCachedValue;
@property(readonly) NSString *value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

