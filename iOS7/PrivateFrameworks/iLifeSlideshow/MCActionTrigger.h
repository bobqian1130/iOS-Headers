/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCAction.h>

@class NSString;

@interface MCActionTrigger : MCAction
{
    NSString *_actionKey;
}

+ (id)actionTriggerForTargetPlugObjectID:(id)arg1 withActionKey:(id)arg2;
@property(copy) NSString *actionKey; // @synthesize actionKey=_actionKey;
- (id)description;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;

@end

