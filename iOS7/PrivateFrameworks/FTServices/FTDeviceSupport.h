/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FTDeviceSupport : NSObject
{
    BOOL _blockPost;
    BOOL _supportsFrontCamera;
    BOOL _supportsBackCamera;
    BOOL _supportsiMessage;
    BOOL _supportsSMS;
    BOOL _supportsMMS;
    BOOL _supportsFT;
    BOOL _supportsWiFi;
    BOOL _supportsWLAN;
    BOOL _supportsNonWiFiFaceTime;
    BOOL _supportsCellularData;
    BOOL _shouldUseSIMState;
    BOOL _commCenterDead;
    BOOL _simBecameNotReady;
    int _carrierBundleSupported;
    int _iMessageAllowedToken;
    BOOL _faceTimeBlocked;
    BOOL _iMessageBlocked;
    BOOL _accountModificationRestricted;
    int _performanceClass;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL supportsMMS; // @synthesize supportsMMS=_supportsMMS;
@property(readonly, nonatomic) BOOL supportsSMS; // @synthesize supportsSMS=_supportsSMS;
@property(readonly, nonatomic) BOOL supportsCellularData; // @synthesize supportsCellularData=_supportsCellularData;
@property(readonly, nonatomic) BOOL supportsWiFi; // @synthesize supportsWiFi=_supportsWiFi;
@property(readonly, nonatomic) BOOL supportsWLAN; // @synthesize supportsWLAN=_supportsWLAN;
@property(readonly, nonatomic) BOOL supportsBackFacingCamera; // @synthesize supportsBackFacingCamera=_supportsBackCamera;
@property(readonly, nonatomic) BOOL supportsFrontFacingCamera; // @synthesize supportsFrontFacingCamera=_supportsFrontCamera;
@property(readonly, nonatomic) BOOL nonWifiCallingAvailable;
@property(readonly, nonatomic) BOOL nonWifiFaceTimeAvailable;
@property(readonly, nonatomic) int deviceType;
@property(readonly, nonatomic) int performanceClass;
- (void)_registerForLockdownNotifications;
- (void)_lockdownStateChanged:(id)arg1;
@property(readonly, nonatomic) NSString *deviceInformationString;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *userAgentString;
@property(readonly, nonatomic) NSString *telephoneNumber;
@property(readonly, nonatomic) BOOL isTelephonyDevice;
@property(readonly, nonatomic) BOOL supportsAppleIDIdentification;
@property(readonly, nonatomic) BOOL supportsSMSIdentification;
@property(readonly, nonatomic) NSDictionary *CTNetworkInformation;
- (void)_handleRegistrationStateChanged:(id)arg1;
- (void)_handlePhoneNumberRegistrationStateChanged:(id)arg1;
- (void)_handleTechnologyChange:(id)arg1;
- (void)_simStatusChanged:(id)arg1;
- (void)_handleSIMInserted:(id)arg1;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly, nonatomic) BOOL wantsBreakBeforeMake;
@property(readonly, nonatomic) BOOL supportsSimultaneousVoiceAndDataRightNow;
@property(readonly, nonatomic) BOOL isC2KEquipment;
@property(readonly, nonatomic) NSDictionary *telephonyCapabilities;
@property(readonly, nonatomic) NSString *deviceTypeIDPrefix;
@property(readonly, nonatomic) NSString *deviceIDPrefix;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) BOOL accountModificationRestricted;
@property(readonly, nonatomic) BOOL registrationSupported;
@property(readonly, nonatomic) BOOL conferencingAllowed;
@property(readonly, nonatomic) BOOL conferencingEnabled;
@property(readonly, nonatomic) BOOL conferencingBlocked;
@property(readonly, nonatomic) BOOL supportsNonWiFiCalling;
@property(readonly, nonatomic) BOOL supportsNonWiFiFaceTime; // @synthesize supportsNonWiFiFaceTime=_supportsNonWiFiFaceTime;
@property(readonly, nonatomic) BOOL identityServicesSupported;
@property(readonly, nonatomic) BOOL faceTimeSupported;
@property(readonly, nonatomic) BOOL faceTimeBlocked;
@property(readonly, nonatomic) BOOL faceTimeAvailable;
@property(readonly, nonatomic) BOOL iMessageSupported;
@property(readonly, nonatomic) BOOL iMessageBlocked;
@property(readonly, nonatomic) BOOL iMessageAvailable;
@property(readonly, nonatomic) BOOL callingSupported;
@property(readonly, nonatomic) BOOL callingBlocked;
@property(readonly, nonatomic) BOOL callingAvailable;
@property(readonly, nonatomic) BOOL madridSupported;
@property(readonly, nonatomic) BOOL madridBlocked;
@property(readonly, nonatomic) BOOL madridAvailable;
@property(readonly, nonatomic) BOOL commCenterDead;
- (void)_unregisterForCoreTelephonyNotifications;
- (void)_registerForInternalCoreTelephonyNotifications;
- (void)_registerForCoreTelephonyNotifications;
- (void)_carrierChanged;
- (void)_operatorChanged;
- (void)_commCenterAlive;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_registerForCommCenterReadyNotifications;
- (void)_updateCapabilities;
- (void)carrierSettingsChanged:(id)arg1;
- (void)_unregisterForCarrierNotifications;
- (void)_registerForCarrierNotifications;
- (void)_registerForCapabilityNotifications;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_updateManagedConfigurationSettings;
- (void)_unregisterForManagedConfigurationNotifications;
- (void)_registerForManagedConfigurationNotifications;
- (void)_watchNotifyTokens;
- (void)dealloc;
- (id)init;

@end

