/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSXMLParser.h"

#import "CoreDAVResponseBodyParser-Protocol.h"

@class CoreDAVErrorItem, CoreDAVItem, CoreDAVXMLElementGenerator, NSError, NSSet, NSURL;

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser>
{
    CoreDAVXMLElementGenerator *_rootElementGenerator;
    CoreDAVXMLElementGenerator *_rootErrorGenerator;
    NSSet *_parseHints;
    NSURL *_baseURL;
}

+ (BOOL)canHandleContentType:(id)arg1;
@property(retain) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain) NSSet *parseHints; // @synthesize parseHints=_parseHints;
@property(retain) CoreDAVXMLElementGenerator *rootErrorGenerator; // @synthesize rootErrorGenerator=_rootErrorGenerator;
@property(retain) CoreDAVXMLElementGenerator *rootElementGenerator; // @synthesize rootElementGenerator=_rootElementGenerator;
@property(readonly) CoreDAVErrorItem *rootError;
@property(readonly) CoreDAVItem *rootElement;
- (void)dealloc;
- (BOOL)processData:(id)arg1 forTask:(id)arg2;
- (id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly) NSError *parserError; // @dynamic parserError;

@end

