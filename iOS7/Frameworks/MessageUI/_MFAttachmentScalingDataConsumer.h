/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MFCountingDataConsumer.h"

@class MFConditionLock, MFGenericAttachmentStore;

@interface _MFAttachmentScalingDataConsumer : MFCountingDataConsumer
{
    MFGenericAttachmentStore *_store;
    MFConditionLock *_lock;
}

@property(nonatomic) MFConditionLock *lock; // @synthesize lock=_lock;
@property(nonatomic) MFGenericAttachmentStore *store; // @synthesize store=_store;
- (int)appendData:(id)arg1;

@end

