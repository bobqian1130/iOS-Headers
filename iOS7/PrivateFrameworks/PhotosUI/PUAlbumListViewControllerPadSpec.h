/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUAlbumListViewControllerSpec.h>

@interface PUAlbumListViewControllerPadSpec : PUAlbumListViewControllerSpec
{
}

- (id)feedViewControllerSpec;
- (id)photosPickerViewControllerSpec;
- (id)panoramaViewControllerSpec;
- (id)gridViewControllerSpec;
- (int)albumDeletionConfirmationStyle;
- (float)sectionFooterHeight;
- (float)sectionHeaderHeight;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (BOOL)usesStackTransitionToGrid;
- (BOOL)allowsAlbumCountSubtitle;
- (struct UIOffset)stackPerspectiveOffset;
- (struct UIEdgeInsets)stackPerspectiveInsets;
- (struct UIOffset)stackOffset;
- (struct CGSize)stackSize;
- (id)emptyStackPhotoDecoration;
- (id)stackPhotoDecoration;
- (unsigned int)stackViewStyle;
- (int)qualityImageFormat;
- (int)fastImageFormat;

@end

