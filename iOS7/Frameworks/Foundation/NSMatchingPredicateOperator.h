/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSStringPredicateOperator.h>

@interface NSMatchingPredicateOperator : NSStringPredicateOperator
{
    int _contextLock;
    CDStruct_c69bce23 *_regexContext;
}

- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (BOOL)_shouldEscapeForLike;
- (SEL)selector;
- (id)symbol;
- (void)finalize;
- (void)dealloc;
- (void)_clearContext;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 variant:(unsigned int)arg3;

@end

