/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFMessageBodyParser.h>

@class NSScanner;

@interface MFMessageBodyHTMLParser : MFMessageBodyParser
{
    NSScanner *_scanner;
}

- (void)didFindError:(id)arg1;
- (BOOL)parse;
- (void)_findBody;
- (BOOL)_isMilestoneTagName:(id)arg1;
- (void)_consumeNodesFromNode:(id)arg1 upToNode:(id)arg2;
- (Class)messageBodyElementClass;
- (int)messageBodyStringAccumulatorDefaultOptions;
- (void)dealloc;
- (id)initWithHTML:(id)arg1;

@end

