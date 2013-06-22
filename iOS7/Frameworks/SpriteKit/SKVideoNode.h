/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpriteKit/SKNode.h>

@class AVPlayer, NSString, NSURL;

@interface SKVideoNode : SKNode
{
    BOOL _isLoaded;
    NSString *_videoFileName;
    NSURL *_videoFileURL;
    AVPlayer *_player;
}

+ (id)videoNodeWithAVPlayer:(id)arg1;
+ (id)videoNodeWithVideoURL:(id)arg1;
+ (id)videoNodeWithVideoFileNamed:(id)arg1;
@property(retain, nonatomic) AVPlayer *_player; // @synthesize _player;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint anchorPoint;
@property(nonatomic) struct CGSize size;
- (void)pause;
- (void)play;
- (void)setPaused:(BOOL)arg1;
- (BOOL)isPaused;
- (id)initWithAVPlayer:(id)arg1;
- (id)initWithVideoFileNamed:(id)arg1;
- (id)initWithVideoURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

