/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUActivity.h>

@class UIViewController;

@interface PUWallpaperActivity : PUActivity
{
    UIViewController *_wallpaperActivityViewController;
}

- (void).cxx_destruct;
- (void)wallpaperImageViewControllerDidCancel:(id)arg1;
- (void)wallpaperImageViewControllerDidFinishSaving:(id)arg1;
- (void)wallpaperImageViewControllerDidCropWallpaper:(id)arg1;
- (id)_embeddedActivityViewController;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;

@end

