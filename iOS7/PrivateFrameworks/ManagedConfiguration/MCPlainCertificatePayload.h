/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSData, NSString;

@interface MCPlainCertificatePayload : MCCertificatePayload
{
    NSString *_certificateFileName;
    NSData *_certificateData;
    NSString *_password;
    int _dataEncoding;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(readonly, nonatomic) int dataEncoding; // @synthesize dataEncoding=_dataEncoding;
@property(readonly, nonatomic) NSString *certificateFileName; // @synthesize certificateFileName=_certificateFileName;
- (void).cxx_destruct;
- (BOOL)isIdentity;
- (id)persistentResourceID;
- (id)description;
- (struct __SecCertificate *)copyCertificate;
- (id)installationWarnings;
- (BOOL)isSigned;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

