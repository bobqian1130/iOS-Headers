/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface SLFacebookPostPrivacySetting : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_name;
    NSDictionary *_parameters;
    int _type;
}

+ (BOOL)supportsSecureCoding;
+ (int)_privacySettingTypeFromTypeIdentifier:(id)arg1;
+ (id)postPrivacySettingsForPrivacyOptions:(id)arg1;
+ (id)postPrivacySettingForPrivacyOptionDictionary:(id)arg1;
+ (id)postPrivacySettingWithIdentifier:(id)arg1 name:(id)arg2 type:(int)arg3 parameters:(id)arg4;
@property int type; // @synthesize type=_type;
@property(retain) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_parametersJSONStringRepresentation;
- (id)parametersFormValueString;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

