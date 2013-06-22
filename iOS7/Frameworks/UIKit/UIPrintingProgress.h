/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIAlertView, UIPrintingProgressViewController;

@interface UIPrintingProgress : NSObject
{
    NSString *_printerName;
    id _cancelHandler;
    double _startTime;
    double _displayTime;
    UIAlertView *_alert;
    UIPrintingProgressViewController *_viewController;
    BOOL _donePrinting;
}

- (double)nextPrintDelay;
- (void)setPage:(int)arg1 ofPage:(int)arg2;
- (void)setPrintInfoState:(int)arg1;
- (void)endProgress;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)didPresentAlertView:(id)arg1;
- (void)progressCancel;
- (void)hideProgressAnimated:(BOOL)arg1;
- (void)showProgress:(id)arg1 immediately:(BOOL)arg2;
- (BOOL)progressVisible;
- (void)dealloc;
- (id)initWithPrinterName:(id)arg1 cancelHandler:(id)arg2;

@end

