/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class BBAction, NSString;

@interface BBButton : NSObject <NSCopying, NSCoding>
{
    NSString *_title;
    BBAction *_action;
    NSString *_identifier;
}

+ (id)buttonWithTitle:(id)arg1 action:(id)arg2 identifier:(id)arg3;
+ (id)buttonWithTitle:(id)arg1 action:(id)arg2;
+ (id)_possiblyCachedButtonForInitializedButton:(id)arg1;
+ (void)_removeButtonFromCache:(id)arg1;
+ (void)_addButtonToCache:(id)arg1;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) BBAction *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

