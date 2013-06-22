/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AFDictationConnection, AFDictationOptions, AFPreferences, NSArray, NSString, NSTimer, UIAlertView, UIDictationTestOps;

@interface UIDictationController : NSObject
{
    AFDictationConnection *_connection;
    AFDictationOptions *_options;
    AFPreferences *_preferences;
    NSArray *_availableLanguages;
    NSTimer *_recordingLimitTimer;
    void *_callCenterFrameworkFileHandle;
    id _callCenter;
    void *_facetimeCallFrameworkFileHandle;
    id _facetimeCallManager;
    BOOL _wasDisabledDueToTelephonyActivity;
    UIAlertView *_dictationAvailableSoonAlert;
    BOOL _connectionWasAlreadyAliveForStatisticsLogging;
    UIDictationTestOps *_dictationDebuggingOperations;
    BOOL cancelledByWaitingForLocalResults;
    BOOL dictationStartedFromGesture;
    BOOL _performTestOperationForEditing;
    BOOL _discardNextHypothesis;
    BOOL _hasPreheated;
    NSString *_previousHypothesis;
    NSString *_language;
    NSString *_inputModeThatInvokedDictation;
    struct _NSRange _insertionRange;
}

+ (void)poppedLastDebuggingOp;
+ (BOOL)usingTypeAndTalk;
+ (id)stringForViewMode:(int)arg1;
+ (id)stringForState:(int)arg1;
+ (void)logDictationString:(id)arg1;
+ (void)didBeginEditingInTextView:(id)arg1;
+ (id)streamingHypothesisForPhrases:(id)arg1;
+ (int)viewMode;
+ (BOOL)starkScreenExists;
+ (void)updateLandingView;
+ (id)metadataDictionaryForCorrectionIdentifier:(id)arg1;
+ (id)attributedStringForDictationResult:(id)arg1 andCorrectionIdentifier:(id)arg2;
+ (id)singleLineResultForResult:(id)arg1;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (id)serializedDictationPhrases:(id)arg1;
+ (id)serializedDictationPhrases:(id)arg1 fromKeyboard:(BOOL)arg2 transform:(struct __CFString *)arg3;
+ (id)interpretation:(id)arg1 forPhraseIndex:(unsigned int)arg2 isShiftLocked:(BOOL)arg3 autocapitalizationType:(int)arg4;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2;
+ (void)applicationDidChangeStatusBarFrame;
+ (void)keyboardDidHide;
+ (void)siriPreferencesChanged;
+ (void)applicationWillResignActive;
+ (void)applicationDidBecomeActive;
+ (BOOL)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
+ (BOOL)shouldDeleteBackwardInInputDelegate:(id)arg1;
+ (BOOL)takesPhysicalButtonsEnded:(id)arg1 forTextView:(id)arg2;
+ (BOOL)takesPhysicalButtonsBegan:(id)arg1 forTextView:(id)arg2;
+ (BOOL)shouldHideCursorForTextView:(id)arg1;
+ (BOOL)shouldHideSelectionUIForTextView:(id)arg1;
+ (BOOL)isTextViewOnStarkScreen:(id)arg1;
+ (void)didOneFingerTapInTextView:(id)arg1;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (void)keyboardDidSetDelegate;
+ (void)keyboardDidSetInputMode;
+ (void)willEndEditingInTextView:(id)arg1;
+ (BOOL)shouldEnableGestureHandler;
+ (void)enableGestureHandlerIfNecessary;
+ (void)disableGestureHandler;
+ (void)logCorrectionStatistics;
+ (BOOL)dictationIsFunctional;
+ (BOOL)fetchCurrentInputModeSupportsDictation;
+ (id)serializedDictationPhrasesFromTokenMatrix:(id)arg1 fromKeyboard:(BOOL)arg2 transform:(struct __CFString *)arg3;
+ (id)inputModeNameForDictation;
+ (BOOL)isRunning;
+ (id)sharedInstance;
+ (id)activeInstance;
+ (BOOL)setupForOpeningConnections;
+ (BOOL)setupForPhraseSerialization;
+ (BOOL)openAssistantFrameworkIfNecessary;
@property(retain, nonatomic) NSString *inputModeThatInvokedDictation; // @synthesize inputModeThatInvokedDictation=_inputModeThatInvokedDictation;
@property(nonatomic) BOOL hasPreheated; // @synthesize hasPreheated=_hasPreheated;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) struct _NSRange insertionRange; // @synthesize insertionRange=_insertionRange;
@property(nonatomic) BOOL discardNextHypothesis; // @synthesize discardNextHypothesis=_discardNextHypothesis;
@property(copy, nonatomic) NSString *previousHypothesis; // @synthesize previousHypothesis=_previousHypothesis;
@property(nonatomic) BOOL performTestOperationForEditing; // @synthesize performTestOperationForEditing=_performTestOperationForEditing;
@property(nonatomic) BOOL dictationStartedFromGesture; // @synthesize dictationStartedFromGesture;
- (void)preheatIfNecessary;
- (BOOL)isInDebuggingMode;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)dictationConnection:(id)arg1 didHypothesizePhrases:(id)arg2 languageModel:(id)arg3;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)resultWithSmartSpaces:(id)arg1;
- (struct __CFString *)resultTransformForLanguageModel:(id)arg1;
- (id)dictationPhraseArrayFromDictationResult:(id)arg1;
- (void)restartDictationForTypeAndTalk;
- (void)stopDictation;
- (void)cancelDictation;
- (void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationForStark;
- (void)startDictationFromLayout;
- (void)startDictation;
- (void)startDictationForReason:(int)arg1;
- (void)setupForDictationStart;
- (void)setupForStreamingDictationStart;
- (void)dismissDictationView:(id)arg1;
- (BOOL)wasDisabledDueToTelephonyActivity;
- (BOOL)dictationEnabled;
- (id)connectionForStatisticsLogging;
- (void)releaseConnectionAfterStatisticsLogging;
- (void)releaseConnectionAfterDictationRequest;
- (void)releaseConnection;
- (id)connection;
- (void)startRecordingLimitTimer;
- (void)cancelRecordingLimitTimer;
- (void)dealloc;
- (int)state;
- (void)errorAnimationDidFinish;
- (void)setState:(int)arg1;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startConnectionForReason:(int)arg1;
- (void)setupConnectionOptions;
- (id)selectedTextForInputDelegate:(id)arg1;
- (id)postfixTextForInputDelegate:(id)arg1;
- (id)prefixTextForInputDelegate:(id)arg1;
- (id)fieldIdentifierInputDelegate:(id)arg1;
- (float)audioLevel;
- (BOOL)supportsInputMode:(id)arg1 error:(id *)arg2;
- (id)supportedDictationLanguages:(id)arg1;
- (id)assistantCompatibleLanguageCodeForInputMode:(id)arg1;
- (BOOL)_shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
- (BOOL)_shouldDeleteBackwardInInputDelegate:(id)arg1;
- (void)_restartDictation;
- (void)willEndEditingInInputDelegate:(id)arg1;
- (void)enableProximity;
- (void)proximityStateChanged:(id)arg1;
- (void)disableAutorotation;
- (void)setDictationInputmode;
- (void)reenableAutorotation;
- (void)delayedTelephonyCheckingSetup;
- (BOOL)disabledDueToTelephonyActivity;
- (id)debuggingDictationOperations;
- (id)init;

@end

