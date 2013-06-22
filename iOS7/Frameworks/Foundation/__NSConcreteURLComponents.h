/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSURLComponents.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface __NSConcreteURLComponents : NSURLComponents <NSCopying>
{
    int _lock;
    NSString *_urlString;
    struct _URIParseInfo _parseInfo;
    unsigned int _schemeComponentValid:1;
    unsigned int _userComponentValid:1;
    unsigned int _passwordComponentValid:1;
    unsigned int _hostComponentValid:1;
    unsigned int _portComponentValid:1;
    unsigned int _pathComponentValid:1;
    unsigned int _queryComponentValid:1;
    unsigned int _fragmentComponentValid:1;
    NSString *_schemeComponent;
    NSString *_userComponent;
    NSString *_passwordComponent;
    NSString *_hostComponent;
    NSNumber *_portComponent;
    NSString *_pathComponent;
    NSString *_queryComponent;
    NSString *_fragmentComponent;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)setPercentEncodedFragment:(id)arg1;
- (id)percentEncodedFragment;
- (void)setPercentEncodedQuery:(id)arg1;
- (id)percentEncodedQuery;
- (void)setPercentEncodedPath:(id)arg1;
- (id)percentEncodedPath;
- (void)setPercentEncodedHost:(id)arg1;
- (id)percentEncodedHost;
- (void)setPercentEncodedPassword:(id)arg1;
- (id)percentEncodedPassword;
- (void)setPercentEncodedUser:(id)arg1;
- (id)percentEncodedUser;
- (void)setFragment:(id)arg1;
- (id)fragment;
- (void)setQuery:(id)arg1;
- (id)query;
- (void)setPath:(id)arg1;
- (id)path;
- (void)setPort:(id)arg1;
- (id)port;
- (void)setHost:(id)arg1;
- (id)host;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setUser:(id)arg1;
- (id)user;
- (void)setScheme:(id)arg1;
- (id)scheme;
- (id)URLRelativeToURL:(id)arg1;
- (id)URL;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2;
- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)freeIvars;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

