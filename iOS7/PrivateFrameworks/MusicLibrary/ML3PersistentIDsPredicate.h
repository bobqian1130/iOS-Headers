/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicLibrary/ML3Predicate.h>

@interface ML3PersistentIDsPredicate : ML3Predicate
{
    unsigned int _count;
    long long *_persistentIDs;
    BOOL _shouldContain;
}

+ (id)predicateWithPersistentIDs:(const long long *)arg1 count:(unsigned int)arg2 shouldContain:(BOOL)arg3;
@property(readonly, nonatomic) BOOL shouldContain; // @synthesize shouldContain=_shouldContain;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPersistentIDs:(const long long *)arg1 count:(unsigned int)arg2 shouldContain:(BOOL)arg3;

@end

