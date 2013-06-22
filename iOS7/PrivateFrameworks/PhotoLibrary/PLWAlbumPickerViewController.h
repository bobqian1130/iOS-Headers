/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibrary/PLAbstractAlbumPickerViewController.h>

@class PLInteractiveNavigationController, PLWLibraryViewController;

@interface PLWAlbumPickerViewController : PLAbstractAlbumPickerViewController
{
    PLInteractiveNavigationController *_navController;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)animateBannerThumbnailToAlbumAtIndex:(unsigned int)arg1 completion:(id)arg2;
- (int)bannerViewStyle;
- (int)albumListFilter;
- (id)preparedLibraryViewController;
@property(readonly, nonatomic) PLWLibraryViewController *libraryViewController;
- (void)setAlbumCreationLabel:(id)arg1;
- (void)_updateBannerViewButton;
- (id)preparedContentController;
- (void)dealloc;
- (id)initWithLibraryContentMode:(int)arg1 assetsToAdd:(id)arg2 completionHandler:(id)arg3;

@end

