/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIMissingItemDelegate-Protocol.h"
#import "SKUIProductPageOverlayDelegate-Protocol.h"
#import "SKUISwooshViewControllerDelegate-Protocol.h"

@class SKUILockupSwooshArtworkLoader, SKUILockupSwooshViewController, SKUIMissingItemLoader, SKUIProductPageOverlayController, SKUISwooshPageComponent;

@interface SKUILockupSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate, SKUISwooshViewControllerDelegate>
{
    SKUILockupSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUIProductPageOverlayController *_overlayController;
    int _overlaySourceIndex;
    SKUILockupSwooshViewController *_swooshViewController;
}

- (void).cxx_destruct;
- (id)_swooshViewController;
- (id)_popSourceViewForOverlayController:(id)arg1;
- (id)_missingItemLoader;
- (void)_loadMissingItemsFromIndex:(int)arg1 withReason:(int)arg2;
- (id)_artworkLoader;
- (void)_addImpressionForItemIndex:(int)arg1 toSession:(id)arg2;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;
- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;
- (void)swooshDidSelectSeeAll:(id)arg1;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(int)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(int)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(int)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2;
- (void)setImage:(id)arg1 forRequest:(id)arg2;
- (void)setInitialColoringIndex:(int)arg1;
- (void)prefetchResourcesWithReason:(int)arg1;
- (int)numberOfCells;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUISwooshPageComponent *pageComponent; // @dynamic pageComponent;

@end

