/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class NSMutableData, NSURLConnection, NSURLRequest;

@interface XMLSAXHTTPRequest : NSObject <NSURLConnectionDelegate>
{
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_rawData;
    BOOL _invalidResponse;
    struct _xmlSAXHandler {
        void *internalSubset;
        void *isStandalone;
        void *hasInternalSubset;
        void *hasExternalSubset;
        void *resolveEntity;
        void *getEntity;
        void *entityDecl;
        void *notationDecl;
        void *attributeDecl;
        void *elementDecl;
        void *unparsedEntityDecl;
        void *setDocumentLocator;
        void *startDocument;
        void *endDocument;
        void *startElement;
        void *endElement;
        void *reference;
        void *characters;
        void *ignorableWhitespace;
        void *processingInstruction;
        void *comment;
        void *warning;
        void *error;
        void *fatalError;
        void *getParameterEntity;
        void *cdataBlock;
        void *externalSubset;
        unsigned int initialized;
        void *_private;
        void *startElementNs;
        void *endElementNs;
        void *serror;
    } _saxHandler;
}

+ (unsigned int)uniqueQueryID;
+ (BOOL)anyRequestLoading;
+ (id)serviceUnavailableError;
- (BOOL)receivedValidResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (int)parseData:(id)arg1;
- (void)didParseData;
- (void)willParseData;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)request;
- (void)loadStatusChanged;
- (BOOL)isLoading;
- (void)cancel;
- (void)loadRequest:(id)arg1;
- (void)_finishedLoading;
- (void)_startedLoading;
- (void)dealloc;
- (id)init;

@end

