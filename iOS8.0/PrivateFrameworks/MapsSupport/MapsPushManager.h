//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"
#import "IDSServiceDelegate.h"

@class APSConnection, GEORPProblemStatusResponse, IDSService, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MapsPushManager : NSObject <APSConnectionDelegate, IDSServiceDelegate>
{
    IDSService *_service;
    NSArray *_devices;
    id <MapsPushDelegate> _delegate;
    APSConnection *_apsConnection;
    CDUnknownBlockType _devicePushTokenCompletion;
}

+ (id)fakeDevicesFromNames:(id)arg1;
+ (id)defaultManager;
@property(copy, nonatomic) CDUnknownBlockType devicePushTokenCompletion; // @synthesize devicePushTokenCompletion=_devicePushTokenCompletion;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property __weak id <MapsPushDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSArray *devices; // @synthesize devices=_devices;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)fetchProblemStatus:(id)arg1 manifestToken:(id)arg2;
- (void)simulateProblemResolution;
@property(readonly, nonatomic) GEORPProblemStatusResponse *_simulatedProblemResolutionResponse;
- (id)_simulatedResolutionNoPlace;
- (id)_simulatedResolutionForPlaces:(id)arg1;
- (id)_simulatedProblemStatus;
- (id)_simulatedRegionForPlaces:(id)arg1;
- (id)_sfoWithName:(BOOL)arg1;
- (id)_palaceOfFineArtsWithName:(BOOL)arg1;
- (id)_transAmericaPyramidWithName:(BOOL)arg1;
- (id)_alcatrazWithName:(BOOL)arg1;
- (void)registerForMapsICloudPushTopic;
- (id)devicePushToken;
- (void)setUpPushConnection;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)pushItem:(id)arg1 toDevice:(id)arg2;
- (void)_updateDevices;
- (id)initPushManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

