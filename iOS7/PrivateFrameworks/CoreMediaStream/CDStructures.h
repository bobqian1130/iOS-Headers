/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CFURLConnectionClient_V1;

struct CGSize {
    float _field1;
    float _field2;
};

struct _CFURLConnection;

struct _MSDSPCContext {
    struct __MSSPCContext _super;
    void *finishedCallback;
    void *authFailedCallback;
    void *didReceiveServerSideConfigurationVersionCallback;
    void *didReceiveRetryAfterCallback;
};

struct __CFData;

struct __CFDictionary;

struct __CFString;

struct __MSSPCContext {
    void *owner;
    struct __CFString *personID;
    struct __CFString *authToken;
    struct __CFDictionary *deviceInfo;
    struct __CFDictionary *clientHeadersRef;
    double connectionTimeout;
    void *__didReceiveDataCallback;
    void *__didFinishCallback;
    void *__didFailAuthenticationCallback;
    void *__didReceiveServerSideConfigVersionCallback;
    void *__didReceiveRetryAfterCallback;
    struct CFURLConnectionClient_V1 *__client;
    struct _CFURLConnection *__connection;
    struct __CFData *__responseData;
    struct __CFHTTPMessage *__response;
    struct __CFError *__error;
};

