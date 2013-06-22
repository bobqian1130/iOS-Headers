/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SKUIItemRequestDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SKUIResourceLoader;

@interface SKUIMissingItemLoader : NSObject <SKUIItemRequestDelegate>
{
    int _batchSize;
    id <SKUIMissingItemDelegate> _delegate;
    NSString *_imageProfile;
    NSString *_keyProfile;
    SKUIResourceLoader *_loader;
    NSMutableDictionary *_requests;
}

@property(copy, nonatomic) NSString *keyProfile; // @synthesize keyProfile=_keyProfile;
@property(copy, nonatomic) NSString *imageProfile; // @synthesize imageProfile=_imageProfile;
@property(nonatomic) __weak id <SKUIMissingItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int batchSize; // @synthesize batchSize=_batchSize;
- (void).cxx_destruct;
- (void)_requestItems:(id)arg1 withReason:(int)arg2;
- (id)_existingRequestIDForItemID:(id)arg1;
- (void)itemRequest:(id)arg1 didFinishWithItems:(id)arg2;
- (void)loadItemsWithIdentifiers:(id)arg1 reason:(int)arg2;
- (void)loadItemsForPageComponent:(id)arg1 startIndex:(int)arg2 reason:(int)arg3;
- (id)initWithResourceLoader:(id)arg1;
- (id)init;

@end

