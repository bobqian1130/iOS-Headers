/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Message/MFAuthScheme.h>

@interface MFPlainAuthScheme : MFAuthScheme
{
}

- (id)humanReadableName;
- (id)name;
- (BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (Class)authenticatorClass;

@end

