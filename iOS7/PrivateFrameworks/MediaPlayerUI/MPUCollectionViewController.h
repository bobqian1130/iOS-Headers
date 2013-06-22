/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayerUI/MPUDataSourceViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class UICollectionView, UICollectionViewLayout;

@interface MPUCollectionViewController : MPUDataSourceViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    Class _cellConfigurationClass;
    UICollectionViewLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
- (void).cxx_destruct;
- (id)_createCollectionViewLayout;
- (id)_createCollectionView;
@property(readonly, nonatomic) Class collectionViewLayoutClass;
@property(readonly, nonatomic) UICollectionViewLayout *collectionViewLayout;
@property(readonly, nonatomic) UICollectionView *collectionView;
@property(readonly, nonatomic) Class cellConfigurationClass;
@property(readonly, nonatomic) Class cellClass;
- (void)reloadData;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)viewDidLoad;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;

@end

