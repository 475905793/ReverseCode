//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface WAProfileSectionHeaderView : UIView
{
    unsigned int _type;
    UIButton *_contentButton;
    UILabel *_titleLabel;
    id <WAProfileSectionHeaderViewDelegate> _delegate;
}

+ (double)headerHeight;
@property(nonatomic) __weak id <WAProfileSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviewsImmediately;
- (void)layoutSubviews;
- (void)updateTitle:(id)arg1 type:(unsigned int)arg2;
- (void)setupSubviews;
- (id)init;

@end
