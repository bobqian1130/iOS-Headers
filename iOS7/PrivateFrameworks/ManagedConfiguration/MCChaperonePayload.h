/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSData;

@interface MCChaperonePayload : MCPayload
{
    NSData *_pairingCertificateData;
    BOOL _nonChaperonePairingAllowed;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, nonatomic) BOOL nonChaperonePairingAllowed; // @synthesize nonChaperonePairingAllowed=_nonChaperonePairingAllowed;
@property(readonly, nonatomic) NSData *pairingCertificateData; // @synthesize pairingCertificateData=_pairingCertificateData;
- (void).cxx_destruct;
- (id)description;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

