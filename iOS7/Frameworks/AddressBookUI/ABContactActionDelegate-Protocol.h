/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol ABContactActionDelegate <NSObject>
- (void)actionWasCanceled:(id)arg1;
- (void)actionDidFinish:(id)arg1;
- (void)action:(id)arg1 presentActionSheet:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;
@end

