//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, TLAccessQueue;

@interface TLVibrationManager : NSObject
{
    BOOL _needsRefresh;
    BOOL _allowsAutoRefresh;
    unsigned int _specialBehaviors;
    NSDictionary *_cachedSystemVibrationPatterns;
    NSDictionary *_cachedUserGeneratedVibrationPatterns;
    TLAccessQueue *_accessQueue;
}

+ (void)_handleVibrateOnRingOrSilentDidChangeNotification;
+ (void)_handleSystemVibrationDidChangeNotification;
+ (id)sharedVibrationManager;
@property(retain, setter=_setAccessQueue:) TLAccessQueue *_accessQueue; // @synthesize _accessQueue;
@property(retain, nonatomic, setter=_setCachedUserGeneratedVibrationPatterns:) NSDictionary *_cachedUserGeneratedVibrationPatterns; // @synthesize _cachedUserGeneratedVibrationPatterns;
@property(retain, nonatomic, setter=_setCachedSystemVibrationPatterns:) NSDictionary *_cachedSystemVibrationPatterns; // @synthesize _cachedSystemVibrationPatterns;
@property(nonatomic, setter=_setSpecialBehaviors:) unsigned int _specialBehaviors; // @synthesize _specialBehaviors;
@property(nonatomic, setter=_setAllowsAutoRefresh:) BOOL _allowsAutoRefresh; // @synthesize _allowsAutoRefresh;
- (void)_setNeedsRefresh:(BOOL)arg1;
@property(nonatomic) BOOL needsRefresh; // @synthesize needsRefresh=_needsRefresh;
- (void)_performBlockInAccessQueue:(CDUnknownBlockType)arg1;
- (void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
- (unsigned int)_storedSystemVibrationDataMigrationVersion;
- (BOOL)_migrateLegacySettings;
@property(readonly, nonatomic) BOOL shouldVibrateOnSilent;
@property(readonly, nonatomic) BOOL shouldVibrateOnRing;
@property(readonly, nonatomic) BOOL shouldVibrateForCurrentRingerSwitchState;
- (BOOL)_booleanPreferenceForKey:(struct __CFString *)arg1 defaultValue:(BOOL)arg2;
- (BOOL)_removeAllUserGeneratedVibrationsWithError:(id *)arg1;
- (unsigned int)_numberOfUserGeneratedVibrations;
- (BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id *)arg3;
- (id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (BOOL)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id *)arg2;
- (BOOL)_sendUserGeneratedVibrationPatternsAffectingMessage:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSDictionary *_userGeneratedVibrationPatterns;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)_copySystemWideVibrationPatternPreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (BOOL)vibrationWithIdentifierIsValid:(id)arg1;
- (id)allUserGeneratedVibrationIdentifiers;
- (id)allSystemVibrationIdentifiers;
- (id)patternForVibrationWithIdentifier:(id)arg1 repeating:(BOOL)arg2;
- (id)patternForVibrationWithIdentifier:(id)arg1;
- (id)nameOfVibrationWithIdentifier:(id)arg1;
- (id)_nameOfVibrationWithIdentifier:(id)arg1;
- (id)_localizedNameForVibrationWithIdentifier:(id)arg1;
- (id)_patternForSystemVibrationWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSDictionary *_systemVibrationPatterns;
@property(readonly, nonatomic, getter=_isUnitTestingModeEnabled) BOOL _unitTestingModeEnabled;
- (id)noneVibrationPattern;
- (id)noneVibrationName;
- (id)noneVibrationIdentifier;
- (id)defaultVibrationPatternForAlertType:(int)arg1;
- (id)defaultVibrationNameForAlertType:(int)arg1;
- (id)defaultVibrationIdentifierForAlertType:(int)arg1;
- (id)currentVibrationPatternForAlertType:(int)arg1;
- (id)currentVibrationNameForAlertType:(int)arg1;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (id)currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2;
- (id)currentVibrationIdentifierForAlertType:(int)arg1;
- (BOOL)refresh;
@property(nonatomic) BOOL allowsAutoRefresh;
- (void)dealloc;
- (id)_initWithSpecialBehaviors:(unsigned int)arg1;
- (id)init;
- (id)currentVibrationPatternForType:(int)arg1;
- (id)currentVibrationNameForType:(int)arg1;
- (void)setCurrentVibrationIdentifier:(id)arg1 forType:(int)arg2 accountIdentifier:(id)arg3;
- (id)currentVibrationIdentifierForType:(int)arg1 accountIdentifier:(id)arg2;
- (void)setCurrentVibrationIdentifier:(id)arg1 forType:(int)arg2;
- (id)currentVibrationIdentifierForType:(int)arg1;

@end

