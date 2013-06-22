/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DataAccess/DAMailboxRequest.h>

@interface DAMailboxGetUpdatesRequest : DAMailboxRequest
{
    int _maxSize;
    int _bodyFormat;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (int)bodyFormat;
- (int)maxSize;
- (id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2;

@end

