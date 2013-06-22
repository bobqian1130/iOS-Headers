/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface UIAccessibilityRemoteElement : NSObject
{
    NSString *_uuid;
    int _remotePid;
    unsigned int _contextId;
    BOOL _onClientSide;
    id _remoteChildrenDelegate;
    NSMutableSet *_allChildren;
    unsigned int _machPort;
}

+ (BOOL)registerRemoteElement:(id)arg1;
+ (id)remoteElementForContextId:(unsigned int)arg1;
+ (id)remoteElementForBlock:(id)arg1;
+ (void)initialize;
@property(nonatomic) unsigned int machPort; // @synthesize machPort=_machPort;
@property(nonatomic) id <UIAccessibilityRemoteElementChildrenDelegate> remoteChildrenDelegate; // @synthesize remoteChildrenDelegate=_remoteChildrenDelegate;
@property(nonatomic) BOOL onClientSide; // @synthesize onClientSide=_onClientSide;
@property(nonatomic) unsigned int contextId; // @synthesize contextId=_contextId;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) int remotePid; // @synthesize remotePid=_remotePid;
- (id)description;
- (struct CGRect)accessibilityFrame;
- (void)unregister;
- (id)accessibilityContainerElements;
- (id)_accessibilityLastElement;
- (id)_accessibilityFirstElement;
- (id)_accessibilityResponderElement;
- (id)_remoteElementWithAttribute:(int)arg1;
- (BOOL)accessibilityViewIsModal;
- (void)dealloc;
- (id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned int)arg3;

@end

