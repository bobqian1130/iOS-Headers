//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WebScriptObjectPrivate : NSObject
{
    struct JSObject *imp;
    struct RootObject *rootObject;
    struct RootObject *originRootObject;
    BOOL isCreatedByDOMWrapper;
}

@end

