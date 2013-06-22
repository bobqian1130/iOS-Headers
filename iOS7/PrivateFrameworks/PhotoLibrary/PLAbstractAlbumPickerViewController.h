/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLAbstractLibraryViewControllerDelegate-Protocol.h"
#import "PLAssetContainerListChangeObserver-Protocol.h"

@class NSOrderedSet, NSString, PLAbstractLibraryViewController, PLLibraryBannerView;

@interface PLAbstractAlbumPickerViewController : UIViewController <PLAbstractLibraryViewControllerDelegate, PLAssetContainerListChangeObserver>
{
    int _libraryContentMode;
    NSOrderedSet *_assetsToAdd;
    NSString *_pickerTitle;
    NSString *_albumCreationLabel;
    id <PLAbstractAlbumPickerViewControllerDelegate> _delegate;
    PLAbstractLibraryViewController *_libraryViewController;
    PLLibraryBannerView *_bannerView;
    UIViewController *_contentViewController;
    id _completionHandler;
}

@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) PLLibraryBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) PLAbstractLibraryViewController *libraryViewController; // @synthesize libraryViewController=_libraryViewController;
@property(nonatomic) id <PLAbstractAlbumPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *albumCreationLabel; // @synthesize albumCreationLabel=_albumCreationLabel;
@property(copy, nonatomic) NSString *pickerTitle; // @synthesize pickerTitle=_pickerTitle;
@property(retain, nonatomic) NSOrderedSet *assetsToAdd; // @synthesize assetsToAdd=_assetsToAdd;
@property(readonly, nonatomic) int libraryContentMode; // @synthesize libraryContentMode=_libraryContentMode;
- (int)bannerViewStyle;
- (struct NSObject *)albumListForContentMode:(int)arg1;
- (int)albumListFilter;
- (id)preparedLibraryViewController;
- (id)preparedContentController;
- (void)animateBannerThumbnailToAlbumAtIndex:(unsigned int)arg1 completion:(id)arg2;
- (void)assetContainerListDidChange:(id)arg1;
- (void)cancelPicker:(id)arg1;
- (BOOL)libraryViewController:(id)arg1 shouldEnableAlbum:(struct NSObject *)arg2;
- (void)viewDidUnload;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithLibraryContentMode:(int)arg1 assetsToAdd:(id)arg2 completionHandler:(id)arg3;

@end

