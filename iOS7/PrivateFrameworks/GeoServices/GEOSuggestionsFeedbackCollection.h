/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSData;

@interface GEOSuggestionsFeedbackCollection : PBCodable
{
    CDStruct_612aec5b _sessionID;
    int _suggestionEntryIndex;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    int _suggestionsEntryListIndex;
    struct {
        unsigned int sessionID:1;
        unsigned int suggestionEntryIndex:1;
        unsigned int suggestionsEntryListIndex:1;
    } _has;
}

@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property(retain, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;
@property(nonatomic) int suggestionEntryIndex; // @synthesize suggestionEntryIndex=_suggestionEntryIndex;
@property(nonatomic) int suggestionsEntryListIndex; // @synthesize suggestionsEntryListIndex=_suggestionsEntryListIndex;
@property(nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property(readonly, nonatomic) BOOL hasSuggestionMetadata;
@property(nonatomic) BOOL hasSuggestionEntryIndex;
@property(nonatomic) BOOL hasSuggestionsEntryListIndex;
@property(nonatomic) BOOL hasSessionID;
- (void)dealloc;

@end

