/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSDictionary;

@interface CalItemMetadata : NSObject <NSCoding>
{
    NSDictionary *_x_props;
    int _classification;
}

+ (id)metadataWithData:(id)arg1;
+ (id)metadataWithICSComponent:(id)arg1;
@property int classification; // @synthesize classification=_classification;
@property(retain) NSDictionary *x_props; // @synthesize x_props=_x_props;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)dataRepresentationWithExistingMetaData:(id)arg1;
- (void)applyToComponent:(id)arg1;
- (id)init;
- (id)initWithICSComponent:(id)arg1;

@end

