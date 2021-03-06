//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "IWXNetWorkVideoPlayStatusExt.h"
#import "MMPictureGalleryDelegate.h"

@class MMPictureGallery, NSArray, NSString, WAMediaFullScreenViewController;

@interface WAProfilePreviewCell : UITableViewCell <MMPictureGalleryDelegate, IWXNetWorkVideoPlayStatusExt>
{
    NSArray *_previewList;
    NSArray *_thumbList;
    MMPictureGallery *_pictureGallery;
    WAMediaFullScreenViewController *_mediaFullScreenViewController;
    unsigned long long _playVideoBeginTimeInMs;
    NSString *_videoUrl;
    id <WAProfilePreviewCellDelegate> _delegate;
}

+ (double)cellHeight;
@property(nonatomic) __weak id <WAProfilePreviewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tryNotifyOnePlayTime:(id)arg1;
- (void)onEndPlay:(id)arg1;
- (void)onStopPlay:(id)arg1;
- (void)onStartPlay:(id)arg1;
- (void)didSelectAtIndex:(unsigned long long)arg1;
- (id)getMediaObjectList;
- (id)accessoryViewForGalleryImageAtIndex:(unsigned long long)arg1 bounds:(struct CGRect)arg2;
- (id)filterPreviewThumbList:(id)arg1;
- (void)updatePreviewList:(id)arg1;
- (void)setupSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

